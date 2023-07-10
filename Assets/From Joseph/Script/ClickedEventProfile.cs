using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit;

public class ClickedEventProfile : MonoBehaviour
{
    //public int Sceneindex;

    private bool m_Enter = false;
    private bool isVisible = false;

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
            ToggleProfiler();
            SetProfilerVisibility(!isVisible);
        }
        //}
    }
    public void ToggleProfiler()
    {
        if (CoreServices.DiagnosticsSystem != null)
        {
            CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
        }
    }
    public void SetProfilerVisibility(bool isVisible)
    {
        if (CoreServices.DiagnosticsSystem != null)
        {
            CoreServices.DiagnosticsSystem.ShowProfiler = isVisible;
        }
    }

    private void Open()//for voice command
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }
}
