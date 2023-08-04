using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VoiceDocument : MonoBehaviour
{
    private AndroidJavaObject currentActivity;

    private void Start()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
    }

    private void Awake()
    {
        RegisterCommand();
    }

    private void OnDestroy()
    {
        UnRegisterCommand();
    }

    private void RegisterCommand()
    {
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "main menu", true, true, true, this.gameObject.name, "ColorRes", "main menu");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "one drive", true, true, true, this.gameObject.name, "ColorRes", "one");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "google drive", true, true, true, this.gameObject.name, "ColorRes", "google");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "main menu");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "one");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "google");
    }


    private void ColorRes(string msg)
    {
        Debug.LogError("ColorRes");

        if (string.Equals("main menu", msg))
        {
            Debug.LogError("Main menu");
            SceneManager.LoadScene("MainMenu");
        }
        else if (string.Equals("one", msg))
        {
            Debug.LogError("One drive");
            OpenCloud(4);
        }
        else if (string.Equals("google", msg))
        {
            Debug.LogError("Google drive");
            OpenCloud(5);
        }
    }

    private void OpenCloud(int requestCode)
    {
        AndroidJavaObject intent = new AndroidJavaObject("android.content.Intent");

        currentActivity.Call("startActivityForResult", intent, requestCode);
    }
}