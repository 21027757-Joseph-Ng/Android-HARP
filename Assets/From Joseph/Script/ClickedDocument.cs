using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit;

public class ClickedDocument : MonoBehaviour
{
    //public int Sceneindex;

    private bool m_Enter = false;

    private const int REQUEST_CODE_SCAN_INFO = 4;
    private AndroidJavaObject currentActivity;

    private void Start()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
    }

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
            //wait for a few second
            StartCoroutine(OpenFolder());
        }
        //}
    }

    public IEnumerator OpenFolderWithDelay()
    {
        yield return new WaitForSeconds(1f); // Wait for 1 seconds before calling OpenFolder()
        //OpenFolder();
        OpenCloud();
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    private const string folderPath = "/sdcard/Documents";

    public IEnumerator OpenFolder()
    {
        yield return new WaitForSeconds(1f);
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");

        AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
        AndroidJavaObject intentObject = new AndroidJavaObject("android.content.Intent");

        AndroidJavaObject componentName = new AndroidJavaObject("android.content.ComponentName", "com.rokid.glass.document2", "com.rokid.glass.document2.activity.MainActivity");
        intentObject.Call<AndroidJavaObject>("setComponent", componentName);

        intentObject.Call<AndroidJavaObject>("putExtra", "file_path_floder", folderPath);

        currentActivity.Call("startActivity", intentObject);
        Debug.Log(1);
    }

    public void OpenCloud()
    {
        AndroidJavaObject intent = new AndroidJavaObject("android.content.Intent");

        currentActivity.Call("startActivityForResult", intent, REQUEST_CODE_SCAN_INFO);
    }

    public void Activate()
    {
        StartCoroutine(OpenFolder());
    }
}