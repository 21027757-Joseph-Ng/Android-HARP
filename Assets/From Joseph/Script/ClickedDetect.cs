using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using System;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.IO;
using Microsoft.MixedReality.OpenXR.BasicSample;


public class ClickedDetect : MonoBehaviour
{
    private bool m_Enter = false;

    private const int REQUEST_CODE_CAPTURE_PHOTO = 3;

    private AndroidJavaObject currentActivity;
    private AndroidJavaObject intentObject;

    public static ClickedDetect Instance;

    public GameObject images;

    [SerializeField]
    private GameObject objectPrefab;

    public void OnPointerEnter()
    {
        m_Enter = true;
        VoiceCommandLogic.Instance.AddInstrucEntityZH("打开", "da kai", true, true, true, this.gameObject.name, "Open", "打开");
    }

    public void OnPointerExit()
    {
        m_Enter = false;
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    private void Update()
    {
        if (!m_Enter) return;
        //if (Application.platform == RuntimePlatform.Android)
        //{
        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("2");
            CapturePhoto();
            Debug.Log("1");
        }
        //}
    }
    //try to startactivityresult in unity and onactivityresult from java file
    public void CapturePhoto()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");

        AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
        intentObject = new AndroidJavaObject("android.content.Intent", "android.media.action.IMAGE_CAPTURE");

        currentActivity.Call("startActivityForResult", intentObject, REQUEST_CODE_CAPTURE_PHOTO);
    }

    public async void DetectFace(string photoData)
    {
        byte[] photoBytes = System.Convert.FromBase64String(photoData);
        Debug.Log("3");
        Debug.Log(photoBytes);
        FaceDetect faceDetect = gameObject.AddComponent<FaceDetect>();
        Debug.Log("Taken photo!");
        await faceDetect.DetectFacesFromImage(photoBytes);
        Debug.Log("4");
        Texture2D texture = new Texture2D(2, 2);
        texture.LoadImage(photoBytes);
        images.GetComponent<RawImage>().texture = texture;
        Debug.Log("5");
    }

    public async void CreateBoundingBox(IdentifiedPerson_RootObject identifiedPerson)
    {
        Debug.Log("starting bounding box");
        if (!images.activeSelf) images.SetActive(true);
        var label = objectPrefab;
        label.GetComponentInChildren<TextMeshPro>().text = identifiedPerson.name;

        Debug.Log("done with label");
    }

    public void noPerson()
    {
        Debug.Log("starting bounding box");
        if (!images.activeSelf) images.SetActive(true);
        var label = objectPrefab;
        label.GetComponentInChildren<TextMeshPro>().text = "Face failed to detect";

        Debug.Log("done with label");
    }
}

