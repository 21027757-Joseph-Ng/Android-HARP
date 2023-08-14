using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.OpenXR.BasicSample;

    public class VoiceFaceDetector : MonoBehaviour
    {
        public GameObject detectButton;

        private ClickedDetect clickedDetect;

        private void Start()
        {
            clickedDetect = detectButton.GetComponent<ClickedDetect>();
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
            VoiceCommandLogic.Instance.AddInstrucEntity(1, "detect", true, true, true, this.gameObject.name, "ColorRes", "detect");
        }

        private void UnRegisterCommand()
        {
            VoiceCommandLogic.Instance.RemoveInstruct(1, "main menu");
            VoiceCommandLogic.Instance.RemoveInstruct(1, "detect");
        }


        private void ColorRes(string msg)
        {
            Debug.LogError("ColorRes");

            if (string.Equals("main menu", msg))
            {
                Debug.LogError("Main menu");
                SceneManager.LoadScene("MainMenu");
            }
            else if (string.Equals("detect", msg))
            {
                Debug.LogError("Detect");
                clickedDetect.CapturePhoto();
            }
        }
    }
