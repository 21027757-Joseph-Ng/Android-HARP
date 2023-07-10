using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoiceScene : MonoBehaviour
{
    [SerializeField]
    private MeshRenderer m_TargetObj;

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
        VoiceCommandLogic.Instance.AddInstrucEntityZH("变成红色", "bian cheng hong se", true, true, true,this.gameObject.name, "ColorRes", "rr");
        VoiceCommandLogic.Instance.AddInstrucEntityZH("变成绿色", "bian cheng lv se", true, true, true, this.gameObject.name, "ColorRes", "gg");

        VoiceCommandLogic.Instance.AddInstrucEntity(1, "show red", true, true, true, this.gameObject.name, "ColorRes", "red");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "show green", true, true, true, this.gameObject.name, "ColorRes", "green");
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("变成红色");
        VoiceCommandLogic.Instance.RemoveInstructZH("变成绿色");

        VoiceCommandLogic.Instance.RemoveInstruct(1, "show red");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "show green");
    }


    private void ColorRes(string msg)
    {
        Debug.LogError("ColorRes");
        

        if (string.Equals("rr", msg) || string.Equals("red", msg))
        {
            Debug.LogError("ChangeColorRed");
            m_TargetObj.material.color = Color.red;
        }
        else if (string.Equals("gg", msg) || string.Equals("blue", msg))
        {
            Debug.LogError("ChangeColorGreen");
            m_TargetObj.material.color = Color.green;
        }
    }

}
