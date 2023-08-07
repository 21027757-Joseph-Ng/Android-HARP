using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VoiceMainMenu : MonoBehaviour
{
    public GameObject documentButton;
    public GameObject qrButton;

    private ClickedDocument clickedDocument;
    private AndroidJavaObject currentActivity;

    private void Start()
    {
        clickedDocument = documentButton.GetComponent<ClickedDocument>();
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
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "checklist", true, false, true, this.gameObject.name, "ColorRes", "checklist");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "document viewer", true, true, true, this.gameObject.name, "ColorRes", "document");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "Q R scanner", true, true, true, this.gameObject.name, "ColorRes", "qr");//not sure how will the string present for pronouncing QR
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "object recognition", true, true, true, this.gameObject.name, "ColorRes", "recognition");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "face detector", true, true, true, this.gameObject.name, "ColorRes", "face");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "measure", true, true, true, this.gameObject.name, "ColorRes", "measure");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "L T A verse", true, true, true, this.gameObject.name, "ColorRes", "lta");//same
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "indoor navigation", true, true, true, this.gameObject.name, "ColorRes", "navigation");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "dynamic 3 6 5", true, true, true, this.gameObject.name, "ColorRes", "dynamic");//same for number
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "setting", true, true, true, this.gameObject.name, "ColorRes", "settings");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "checklist");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "document");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "qr");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "recognition");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "face");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "measure");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "lta");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "navigation");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "dynamic");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "settings");
    }


    private void ColorRes(string msg)
    {
        Debug.LogError("ColorRes");
        
        if (string.Equals("checklist", msg))
        {
            Debug.LogError("Checklist");
            SceneManager.LoadScene("CheckList");
        }
        else if (string.Equals("document", msg))
        {
            Debug.LogError("Document Viewer");
            StartCoroutine(clickedDocument.OpenFolderWithDelay());
        }
        else if (string.Equals("qr", msg))
        {
            Debug.LogError("QRScanner");
            AndroidJavaObject intent = new AndroidJavaObject("android.content.Intent");
            AndroidJavaObject comp = new AndroidJavaObject("android.content.ComponentName",
                "com.rokid.glass.scan2",
                "com.rokid.glass.scan2.activity.QrCodeActivity");
            intent.Call<AndroidJavaObject>("setComponent", comp);
            currentActivity.Call("startActivityForResult", intent, 1);
        }
        else if (string.Equals("recognition", msg))
        {
            Debug.LogError("Object Detect");
            SceneManager.LoadScene("ObjectDetect");
        }
        else if (string.Equals("face", msg))
        {
            Debug.LogError("Face Detector");
            SceneManager.LoadScene("FaceDetector");
        }
        else if (string.Equals("measure", msg))
        {
            Debug.LogError("Measure");
            SceneManager.LoadScene("Measure");
        }
        else if (string.Equals("lta", msg))
        {
            Debug.LogError("LTA Verse");
            SceneManager.LoadScene("User");
        }
        else if (string.Equals("navigation", msg))
        {
            Debug.LogError("Indoor Navigation");
            SceneManager.LoadScene("SampleScene");
        }
        else if (string.Equals("dynamic", msg))
        {
            Debug.LogError("Dynamic 365");
            SceneManager.LoadScene("Dynamic365");
        }
        else if (string.Equals("settings", msg))
        {
            Debug.LogError("Settings");
            SceneManager.LoadScene("Settings");
        }
    }

}
