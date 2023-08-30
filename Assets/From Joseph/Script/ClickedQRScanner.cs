using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit;
using System;

public class ClickedQRScanner : MonoBehaviour
{
    //public int Sceneindex;

    private bool m_Enter = false;

    private const int REQUEST_CODE_SCAN_INFO = 1;
    private AndroidJavaObject currentActivity;

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

        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("1");
            LaunchQRScanner();
        }
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    private void Start()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
    }

    public void LaunchQRScanner()
    {
        AndroidJavaObject intent = new AndroidJavaObject("android.content.Intent");
        AndroidJavaObject comp = new AndroidJavaObject("android.content.ComponentName",
            "com.rokid.glass.scan2",
            "com.rokid.glass.scan2.activity.QrCodeActivity");
        intent.Call<AndroidJavaObject>("setComponent", comp);
        currentActivity.Call("startActivityForResult", intent, REQUEST_CODE_SCAN_INFO);
    }

    public void Activate()
    {
        LaunchQRScanner();
    }
}