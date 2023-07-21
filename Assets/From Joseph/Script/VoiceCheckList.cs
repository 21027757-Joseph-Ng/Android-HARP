using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VoiceCheckList : MonoBehaviour
{
    public GameObject checklistMenu;
    public GameObject toDoList;

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
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "main", true, true, true, this.gameObject.name, "ColorRes", "main");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "list", true, true, true, this.gameObject.name, "ColorRes", "checklist");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "thermatic", true, true, true, this.gameObject.name, "ColorRes", "thermatic");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "main");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "checklist");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "thermatic");
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
            checklistMenu.SetActive(!checklistMenu.activeSelf);
        }
        else if (string.Equals("thermatic", msg))
        {
            Debug.LogError("Thermatic");
            toDoList.SetActive(!toDoList.activeSelf);
        }
    }

}
