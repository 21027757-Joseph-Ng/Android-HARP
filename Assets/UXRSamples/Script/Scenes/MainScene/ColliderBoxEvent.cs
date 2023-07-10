using UnityEngine;
using UnityEngine.SceneManagement;

public class ColliderBoxEvent : MonoBehaviour
{
    //public int Sceneindex;
    public string SceneName;

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
                SceneManager.LoadScene(SceneName);
            }
        //}
    }

    private void Open()
    {
        SceneManager.LoadScene(SceneName); 
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }
}
