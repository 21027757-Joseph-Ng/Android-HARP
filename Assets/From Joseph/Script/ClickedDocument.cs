using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit;

public class ClickedDocument : MonoBehaviour
{
    //public int Sceneindex;

    private bool m_Enter = false;

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
            StartCoroutine(OpenFolderWithDelay());
        }
        //}
    }

    private IEnumerator OpenFolderWithDelay()
    {
        yield return new WaitForSeconds(1f); // Wait for 2 seconds before calling OpenFolder()
        OpenFolder();
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    private const string folderPath = "/sdcard/Documents";

    public void OpenFolder()
    {
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
    //the code always open the first file in the first pdf, how to only open the folder and not the file?
    //i see the demostration, the code is written in java, but this c# script i provided is converted from the same java code. that demostration do have their code work by only opening up the folder not the file, why is it?
    //i tried more testing, it is that it do not just open the first file, it also open the first folder, so that means it could be that when i call the function which use the same button for selecting the file to activate the function, it also select the file
    //im doing a android project in unity, i make a game object attached with a script that when clicked on it, it will call the method, OpenFolder(), which will open up the folder, this is design for android device named rokid, and i found a bug that it open up first file or folder in the folder, opening up the file or folder is triggered by the same button i use to click to toggle the method.
}