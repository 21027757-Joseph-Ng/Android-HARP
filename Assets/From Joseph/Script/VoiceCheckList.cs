using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VoiceCheckList : MonoBehaviour
{
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
        Debug.LogError(this.gameObject.name);
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "main menu", true, true, true, this.gameObject.name, "ColorRes", "main");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "list", true, true, true, this.gameObject.name, "ColorRes", "checklist");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "main");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "checklist");
    }


    private void ColorRes(string msg)
    {
        Debug.LogError("ColorRes");


        if (string.Equals("main", msg))
        {
            Debug.LogError("MainMenu");
            SceneManager.LoadScene("MainMenu");
        }
        else if (string.Equals("checklist", msg))
        {
            Debug.LogError("Checklist");
            //SceneManager.LoadScene("CheckList");
            //load up checklist
        }
    }

}
