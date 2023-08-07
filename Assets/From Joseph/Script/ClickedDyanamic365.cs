using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickedDyanamic365 : MonoBehaviour
{
    //public int Sceneindex;

    private bool m_Enter = false;
    private const int REQUEST_CODE_SCAN_INFO = 2;

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

    private void Start()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
    }

    private void Update()
    {
        if (!m_Enter) return;
        //if (Application.platform == RuntimePlatform.Android)
        //{

        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("1");
            LaunchDynamic365();
        }
        //onActivityResult(qrCodeActivity);// or qrcodeactivity
        //}
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    private void LaunchDynamic365()
    {
        Debug.Log("2");
        //AndroidJavaObject intent = new AndroidJavaObject("android.content.Intent");

        //currentActivity.Call("startActivityForResult", intent, REQUEST_CODE_SCAN_INFO);
    }
}
