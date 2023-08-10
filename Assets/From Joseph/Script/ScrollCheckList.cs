using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit.Examples.Demos;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class ScrollCheckList : MonoBehaviour//attach to game object
    {
        public GameObject mainMenu;
        public GameObject checkList;
        public GameObject closeCheckList;
        public GameObject toDoList;
        public GameObject closeToDo;
        public GameObject save;

        public GameObject scrollPaginationButtons;//for scrolling in todo list
        public GameObject allChecklistManager1;
        public GameObject toDoListManager;
        public GameObject gridObjectCollection;

        private List<GameObject> list = new List<GameObject>();
        private int buttonIndex = 0;
        private string scroll;
        // Start is called before the first frame update
        void Start()
        {
            list.Add(mainMenu);//0
            list.Add(checkList);//1
            list.Add(null);//2
            list.Add(closeCheckList);//3
            list.Add(toDoList);//4
            list.Add(null);//5
            list.Add(closeToDo);//6
            for (int i=0; i < CountList(); i++)//7 to 5 + CountList() + 1
            {
                list.Add(gridObjectCollection.transform.GetChild(i).gameObject);
            }
            list.Add(save);
            list.Add(null);

            GetChild(buttonIndex);
            scroll = "hand";
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
            {
                Debug.Log("clicked");
                Debug.Log(buttonIndex);
                ButtonFunction(buttonIndex);
                Debug.Log("buttonfunction: " + buttonIndex);
            }

            //hand menu
            if (Input.GetKeyDown(KeyCode.RightArrow) && scroll.Equals("hand"))//downward
            {
                Debug.Log("downward");
                if (buttonIndex == -1)
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex == 1)
                {
                    buttonIndex++;
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != 2)//-1 0 1 2
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow) && scroll.Equals("hand"))//upward
            {
                Debug.Log("upward");
                if (buttonIndex == 0)
                {
                    buttonIndex--;
                    DeactivateChild(buttonIndex + 1);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex == 2)//-1 0 1 2
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != -1)
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex + 1);
                    Debug.Log(buttonIndex);
                }
            }

            //checklist
            if (Input.GetKeyDown(KeyCode.RightArrow) && scroll.Equals("checklist"))//downward
            {
                Debug.Log("downward");
                if (buttonIndex == 2)
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex == 4)
                {
                    buttonIndex++;
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != 5)
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow) && scroll.Equals("checklist"))//upward
            {
                Debug.Log("upward");
                if (buttonIndex == 3)
                {
                    buttonIndex--;
                    DeactivateChild(buttonIndex + 1);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex == 5)
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != 2)
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex + 1);
                    Debug.Log(buttonIndex);
                }
            }

            //todo list
            if (Input.GetKeyDown(KeyCode.RightArrow) && scroll.Equals("todo"))//downward
            {
                Debug.Log("downward");
                if (buttonIndex == 5)//min null
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                //if (buttonIndex == 6)
                //{
                //    buttonIndex++;
                //    GetChild(buttonIndex);
                //    DeactivateChild(buttonIndex - 1);
                //    Debug.Log(buttonIndex);
                //}

                else if (buttonIndex == 5 + CountList() + 2)//max -1 save button
                {
                    buttonIndex++;
                    DeactivateChild(buttonIndex - 1);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != 5 + CountList() + 3)//max 3 are save button and null and close
                {
                    buttonIndex++;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex - 1);
                    //scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(1);
                    Debug.Log(buttonIndex);
                }
            }

            else if (Input.GetKeyDown(KeyCode.LeftArrow) && scroll.Equals("todo"))//upward
            {
                Debug.Log("upward");
                if (buttonIndex == 6)
                {
                    buttonIndex--;
                    DeactivateChild(buttonIndex + 1);
                    //scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(-1);
                    Debug.Log(buttonIndex);
                }

                //else if (buttonIndex == 5 + CountList() + 2)
                //{
                //    buttonIndex--;
                //    GetChild(buttonIndex);
                //    DeactivateChild(buttonIndex + 1);
                //    Debug.Log(buttonIndex);
                //}

                else if (buttonIndex == 5 + CountList() + 3)// 3 = null + save + close
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    Debug.Log(buttonIndex);
                }

                else if (buttonIndex != 5)
                {
                    buttonIndex--;
                    GetChild(buttonIndex);
                    DeactivateChild(buttonIndex + 1);
                    //scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(-1);
                    Debug.Log(buttonIndex);
                }
            }
        }

        private void GetChild(int index)
        {
            if (list[index] != null)
            {
                GameObject child = list[index].gameObject;
                child.transform.Find("BackPlate").gameObject.SetActive(true);
                Debug.Log("get: " + child);
            }
        }

        private void DeactivateChild(int index)
        {
            if (list[index] != null)
            {
                GameObject child = list[index].gameObject;
                child.transform.Find("BackPlate").gameObject.SetActive(false);
                Debug.Log("deactivate: " + child);
            }
        }

        private int CountList()
        {
            int count = 0;
            foreach (Transform child in gridObjectCollection.transform)
            {
                if (child.gameObject.activeSelf)
                {
                    count++;
                }
            }
            return count;
        }

        private void ButtonFunction(int index)
        {
            Debug.Log("ButtonFunction");
            switch (index)
            {
                case -1://null
                    break;
                case 0://main menu
                    Debug.Log("button1");
                    SceneManager.LoadScene("MainMenu");
                    Debug.Log("button1");
                    break;
                case 1://checklist
                    Debug.Log("button2");
                    allChecklistManager1.SetActive(true);
                    buttonIndex = 3;
                    scroll = "checklist";
                    DeactivateChild(1);
                    GetChild(3);
                    Debug.Log("button2");
                    break;
                case 2://null
                    break;
                case 3://close
                    Debug.Log("button3");
                    allChecklistManager1.SetActive(false);
                    buttonIndex = 1;
                    scroll = "hand";
                    DeactivateChild(3);
                    GetChild(1);
                    Debug.Log("button3");
                    break;
                case 4://todo list
                    toDoListManager.SetActive(true);
                    buttonIndex = 6;
                    scroll = "todo";
                    DeactivateChild(4);
                    GetChild(6);
                    Debug.Log("button4");
                    break;
                case 5://null
                    break;
                case 6://close
                    toDoListManager.SetActive(false);
                    buttonIndex = 3;
                    scroll = "checklist";
                    DeactivateChild(6);
                    GetChild(3);
                    Debug.Log("button5");
                    break;
                default:
                    if (index > 6 && index < 5 + CountList() + 2)//7 - max 7: tick...save null, 2 = close + save
                    {
                        gridObjectCollection.transform.GetChild(index - 7).GetComponent<ChecklistObject>().setToggle();//starting from case 7(index 7), first tick, if index 7, -7 = 0, index 0 of parent's child group
                        gridObjectCollection.transform.GetChild(index - 7).GetChild(0).GetChild(2).GetComponent<ObjectController>().OnPointerClick();//indifcate if tickbox is ticked
                    }
                    else if (index == 5 + CountList() + 2)//save
                    {
                        save.GetComponent<UploadToDrive>().startSave();
                    }
                    else if (index == 5 + CountList() + 3)//null
                    {
                        //nothing
                    }
                    break;
            }//i want to use switch case, and i need a lot of cases, most of the cases have same code, however idk how many switch cases i need, give me a code to settle that
            //remember to do the highlight of tickbox
        }
    }
}
