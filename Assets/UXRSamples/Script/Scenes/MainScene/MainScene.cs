using UnityEngine;
using UnityEngine.SceneManagement;

#if UNITY_ANDROID
public class MainScene : MonoBehaviour
{
    private void Awake()
    {
        RegisterCommand();
    }

    void Update()
    {

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }

        
        if (Application.platform == RuntimePlatform.Android && (Input.GetKeyDown((KeyCode.DownArrow))) && string.Equals(SystemInfo.deviceModel.ToString(), "Rokid RG-crown")) //yidao dpad down
        {
            Debug.Log("-UXR- MainScene Input DownArrow");
            Google.XR.Cardboard.Api.Recenter();
        }

        if (Application.platform == RuntimePlatform.Android && Input.GetKeyDown(KeyCode.JoystickButton0) && string.Equals(SystemInfo.deviceModel.ToString(), "Rokid RG-crown")) //yidao dpad center
        {
            Debug.Log("-UXR- MainScene Input KEYCODE_DPAD_CENTER");
            Google.XR.Cardboard.Api.Recenter();
        }
        
    }


    private void OnDestroy()
    {
        UnRegisterCommand();
    }

    private void RegisterCommand()
    {
        VoiceCommandLogic.Instance.AddInstrucEntityZH("头控追踪", "tou kong zhui zong", true, true, true, this.gameObject.name, "OpenHeadTracking", "头控追踪");
        VoiceCommandLogic.Instance.AddInstrucEntityZH("语音识别", "yu yin shi bie", true, true, true, this.gameObject.name, "OpenVoiceRecog", "语音识别");
        VoiceCommandLogic.Instance.AddInstrucEntityZH("手势识别", "shou shi shi bie", true, true, true, this.gameObject.name, "OpenGestureRecog", "手势识别");

    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("头控追踪");
        VoiceCommandLogic.Instance.RemoveInstructZH("语音识别");
        VoiceCommandLogic.Instance.RemoveInstructZH("手势识别");
    }

    private void Open()
    {

    }

    private void OpenHeadTracking()
    {
        LoadScene("uxr01-HeadTracking");
    }

    private void OpenVoiceRecog()
    {
        LoadScene("uxr02-VoiceRecog");
    }

    private void OpenGestureRecog()
    {
        LoadScene("uxr04-WebCamera");
    }

    private void LoadScene(int index)
    {
        SceneManager.LoadScene(index);
    }

    private void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
#endif