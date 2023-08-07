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
namespace Microsoft.MixedReality.OpenXR.BasicSample
{
public class DetectObject : MonoBehaviour
{
    private bool m_Enter = false;

    private const int REQUEST_CODE_CAPTURE_PHOTO = 3;

    private AndroidJavaObject currentActivity;
    private AndroidJavaObject intentObject;

    public static DetectObject Instance;

        string deviceName;
        WebCamTexture webCam;
        public RawImage videoPreview;
        public GameObject videoObject;
        public GameObject handGestureObject;
        Texture2D sourceTex2D;
        RenderTexture renderTexture;
        private float elapseTime;
        public int FPS = 30;

        private bool startRecord = true;

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

        private void Start()
        {
            //InitVideo(1280, 720, 30);
            //ToggleGes("true");
        }

        private void Update()
    {

            //if (startRecord)
            //{
            //    elapseTime += Time.deltaTime;
            //    if (elapseTime > 1.0f / FPS)
            //    {
            //        elapseTime = 0;
            //        sourceTex2D = TextureToTexture2D(webCam);
            //        if (sourceTex2D == null)
            //        {
            //            Debug.Log("SourceTex2D is Null !!!");
            //        }
            //        else
            //        {
            //            Debug.Log("Enter Data to Buffer");
            //            UXRGesCamera.Instance.EnterVideoFrameBuffer(new UXRGesCamera.VideoFrame()
            //            {
            //                frameData = sourceTex2D.GetRawTextureData()
            //            });
            //        }
            //    }
            //}

            if (!m_Enter) return;
        //if (Application.platform == RuntimePlatform.Android)
        //{
        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
                //webCam.Stop(); // To Test
                //videoObject.SetActive(false);
                //startRecord = false;

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
        CustomVision faceDetect = gameObject.AddComponent<CustomVision>();
        Debug.Log("Taken photo!");
        await faceDetect.MakePredictionRequest(photoBytes);
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

        //private void InitVideo(int width, int height, int fps)
        //{
        //    Debug.Log("Init Video");
        //    WebCamDevice[] devices = WebCamTexture.devices;
        //    if (devices.Length < 1)
        //    {
        //        Debug.Log("设备上未找到摄像头,请检查设备");
        //        return;
        //    }
        //    deviceName = devices[0].name;
        //    webCam = new WebCamTexture(deviceName, width, height, fps);//设置宽、高和帧率   
        //    RawImage preview = videoPreview;
        //    preview.texture = webCam;
        //    preview.color = Color.white;
        //    webCam.Play();
        //    if (Application.platform == RuntimePlatform.Android)
        //    {
        //        UXRGesCamera.Instance.GesInit(width, height);
        //    }
        //}

        //private Texture2D TextureToTexture2D(Texture texture)
        //{
        //    if (sourceTex2D == null)
        //    {
        //        sourceTex2D = new Texture2D(texture.width, texture.height, TextureFormat.BGRA32, false);
        //        sourceTex2D.filterMode = FilterMode.Point;
        //    }

        //    if (renderTexture == null)
        //    {
        //        renderTexture = new RenderTexture(texture.width, texture.height, 24);
        //        renderTexture.filterMode = FilterMode.Point;
        //        renderTexture.antiAliasing = 8;
        //    }

        //    RenderTexture.active = renderTexture;
        //    Graphics.Blit(texture, renderTexture);
        //    sourceTex2D.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0);
        //    sourceTex2D.Apply();
        //    RenderTexture.active = null;
        //    return sourceTex2D;
        //}

        //private void ToggleGes(string args)
        //{
        //    Debug.Log("ToggleGes args:" + args);
        //    if (args == "true")
        //    {
        //        Debug.Log("开启手势...");
        //        UXRGesCamera.Instance.GesStart();
        //        startRecord = true;
        //        handGestureObject.GetComponent<RKGesSampleInteraction>().openGes = true;
        //    }
        //    else if (args == "false")
        //    {
        //        Debug.Log("关闭手势...");
        //        UXRGesCamera.Instance.GesStop();
        //        startRecord = false;
        //        handGestureObject.GetComponent<RKGesSampleInteraction>().openGes = false;
        //    }
        //}

        public void onClickButton()
        {
            //webCam.Stop(); // To Test
            //videoObject.SetActive(false);
            //startRecord = false;

            Debug.Log("2");
            CapturePhoto();
            Debug.Log("1");
        }
    }
}
