using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VoiceSetting : MonoBehaviour
{
    public GameObject utilitiesButton;

    private ClickedEventUtil clickedEventUtil;

    private void Start()
    {
        clickedEventUtil = utilitiesButton.GetComponent<ClickedEventUtil>();
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
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "utility", true, true, true, this.gameObject.name, "ColorRes", "utility");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "main menu");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "utility");
    }


    private void ColorRes(string msg)
    {
        Debug.LogError("ColorRes");

        if (string.Equals("main menu", msg))
        {
            Debug.LogError("Main menu");
            SceneManager.LoadScene("MainMenu");
        }
        else if (string.Equals("utility", msg))
        {
            Debug.LogError("Utility");
            clickedEventUtil.ToToggle();
        }
    }
}