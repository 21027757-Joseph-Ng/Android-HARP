using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class ScrollFace : MonoBehaviour//attach to button collection
    {
        public GameObject mainMenu;
        public GameObject faceDetect;

        private List<GameObject> list = new List<GameObject>();
        private int buttonIndex = 0;
        // Start is called before the first frame update
        void Start()
        {
            list.Add(mainMenu);
            list.Add(faceDetect);

            GetChild(buttonIndex);

        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.RightArrow))//upward
            {
                Debug.Log("downward");
                if (buttonIndex == -1)
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                }

                else if (buttonIndex == 1)
                {
                    buttonIndex++;
                    DeactivateChild(buttonIndex - 1);
                }

                else if (buttonIndex != 2)//-1 0 1 2
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow))//downward
            {
                Debug.Log("upward");
                if (buttonIndex == 0)
                {
                    buttonIndex--;
                    DeactivateChild(buttonIndex + 1);
                }

                else if (buttonIndex == 2)//-1 0 1 2
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                }

                else if (buttonIndex != -1)
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex + 1);
                    Debug.Log(buttonIndex);
                }
            }

            if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
            {
                if (buttonIndex != 10)
                {
                    buttonFunction(buttonIndex);
                }
            }
        }

        private void GetChild(int index)
        {


            GameObject child = list[index].gameObject;
            child.transform.Find("BackPlate").gameObject.SetActive(true);
            Debug.Log("get: " + child);
        }

        private void DeactivateChild(int index)
        {

            GameObject child = list[index].gameObject;
            child.transform.Find("BackPlate").gameObject.SetActive(false);
            Debug.Log("deactivate: " + child);
        }

        private void buttonFunction(int index)
        {
            switch (index)
            {
                case 0://main menu
                    SceneManager.LoadScene("MainMenu");
                    Debug.Log("button1");
                    break;
                case 1://detect face
                    faceDetect.GetComponent<ClickedDetect>().CapturePhoto();
                    Debug.Log("button2");
                    break;
            }
        }
    }
}