using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedEventUtil : MonoBehaviour
{
    //public int Sceneindex;

    public SettingBool boolData;
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
            ToToggle();        
        }
        //}
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

    public void ToToggle()
    {
        boolData.settingON = !boolData.settingON;
        GameObject utils = GameObject.FindWithTag("Util");
        for (int i = 0; i < utils.transform.childCount; i++)
        {
            utils.transform.GetChild(i).gameObject.SetActive(!utils.transform.GetChild(i).gameObject.activeSelf);
        }
    }
}
