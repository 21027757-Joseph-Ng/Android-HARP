using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.Toolkit.Examples.Demos;
using Microsoft.MixedReality.OpenXR.BasicSample;
using System.Reflection;
using TMPro;

public class VoiceCheckList : MonoBehaviour
{
    public GameObject checklistMenu;
    private GameObject toDoList;
    private GameObject scrollPaginationButtons;
    private GameObject gridObjectCollection;
    private GameObject save;
    public Transform checklist;
    public GameObject todoListMenu;
    public GameObject checklistUpDown;

    private List<GameObject> list = new List<GameObject>();

    private void Start()
    {
        //for (int i = 0; i < CountList(); i++)//7 to 5 + CountList() + 1
        //{
            //list.Add(gridObjectCollection.transform.GetChild(i).gameObject);
        //}

        //checklistMenu = GameObject.Find("GameObject").transform.GetChild(1).gameObject;// allchecklistmanager1
        //checklist = checklistMenu.transform.GetChild(0).GetChild(0).GetChild(0);//container, store list of todo list
        //todoListMenu = GameObject.Find("GameObject").transform.GetChild(2).gameObject; // third menu, todolist manager
        //checklistUpDown = checklistMenu.transform.GetChild(0).Find("ScrollPaginationButtons").gameObject;
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
        Debug.LogError(this.gameObject.name);
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "main menu", true, true, true, this.gameObject.name, "ColorRes", "main menu");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "checklist", true, true, true, this.gameObject.name, "ColorRes", "checklist");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "to do list", true, true, true, this.gameObject.name, "ColorRes", "thermatic");

        //dynamic
        //checklist

        for (int i = 1; i < checklist.childCount; i++)
        {
            VoiceCommandLogic.Instance.AddInstrucEntity(1, checklist.transform.GetChild(i).Find("IconAndText").GetChild(0).GetComponent<TextMeshPro>().text, true, true, true, this.gameObject.name, "ColorRes", checklist.transform.GetChild(i).Find("IconAndText").GetChild(0).GetComponent<TextMeshPro>().text);
        }


        //voice command for selecting checkbox, it should be "one" or "select one"
        //voice command for up and down button;
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "main menu");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "checklist");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "thermatic");


        //Transform checklist = checklistMenu.transform.GetChild(0).GetChild(0).GetChild(0);//container
        //checklist
        for (int i = 1; i < checklist.childCount; i++)
        {
            VoiceCommandLogic.Instance.RemoveInstruct(1, checklist.transform.GetChild(i).Find("IconAndText").GetChild(0).GetComponent<TextMeshPro>().text);
        }

        //todolist
        UnregisterTodoList();

        UnregisterTodoScroll();
        UnregisterCheckListScroll();
        UnregisterSave();
    }

    private void RegisterTodoList()
    {
        for (int j = 1; j < CountList() + 1; j++)//toggle button
        {
            VoiceCommandLogic.Instance.AddInstrucEntity(1, "select item " + j.ToString(), true, true, true, this.gameObject.name, "ColorRes", j.ToString());
        }
    }

    private void UnregisterTodoList()
    {
        for (int j = 1; j < CountList() + 1; j++)//toggle button
        {
            VoiceCommandLogic.Instance.RemoveInstruct(1, j.ToString());
        }
    }

    private void RegisterTodoScroll()
    {
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "up", true, true, true, this.gameObject.name, "ColorRes", "uptodo");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "down", true, true, true, this.gameObject.name, "ColorRes", "downtodo");
    }

    private void UnregisterTodoScroll()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "uptodo");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "downtodo");
    }

    private void RegisterCheckListScroll()
    {
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "up", true, true, true, this.gameObject.name, "ColorRes", "upchecklist");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "down", true, true, true, this.gameObject.name, "ColorRes", "downchecklist");
    }

    private void UnregisterCheckListScroll()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "upchecklist");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "downchecklist");
    }

    private void RegisterSave()
    {
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "save", true, true, true, this.gameObject.name, "ColorRes", "save");
    }

    private void UnregisterSave()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "save");
    }

    private void ColorRes(string msg)//the voice command for checkbox should be depend on if the button is active, if not, it cant toggle. the up and down button will do exactly what they do in previous device
    {
        Debug.LogError("ColorRes");
        Debug.Log(msg);
        Debug.Log(todoListMenu);
        Debug.Log(todoListMenu.transform.childCount);
        Debug.Log(checklist);

        Debug.Log(6);
        //custom
        if (string.Equals("main menu", msg))
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


        //dynamic
        //checklist
        int count = 0;
        for (int i = 1; i < todoListMenu.transform.childCount + 1; i++)//check if any todolist is open
        { 
            if (todoListMenu.transform.GetChild(i - 1).gameObject.activeSelf)
            {
                count++;
            }
        }

        //on and off todolist, when a todolist is on, cannot say other todolist to open or close, when no todolist is on, can say it 
        Debug.Log(1);
        //checklist
            for (int i = 1; i < todoListMenu.transform.childCount + 1; i++)//check if any todolist is open
            {
                Debug.Log("TodoList child text: " + checklist.GetChild(i).GetChild(3).GetChild(0).GetComponent<TextMeshPro>().text);
                if (todoListMenu.transform.GetChild(i-1).gameObject.activeSelf && string.Equals(checklist.GetChild(i).GetChild(3).GetChild(0).GetComponent<TextMeshPro>().text, msg) && count == 1)//if the voice command said todolist is active
                {
                    Debug.Log("TodoList close");
                    gridObjectCollection = todoListMenu.transform.GetChild(i - 1).GetChild(1).GetChild(0).GetChild(0).GetChild(0).gameObject;
                    todoListMenu.transform.GetChild(i-1).gameObject.SetActive(false);//close it if open
                    //deregister the scroll and todolist checkbox, save button register the scroll in checklist
                    UnregisterTodoScroll();
                    UnregisterTodoList();
                    UnregisterSave();
                    RegisterCheckListScroll();
                }
                else if (!todoListMenu.transform.GetChild(i-1).gameObject.activeSelf && string.Equals(checklist.GetChild(i).GetChild(3).GetChild(0).GetComponent<TextMeshPro>().text, msg) && count == 0)//the todolist is not active, open it
                {
                    //register the todolist scroll and checkbox, save button, unregister the scroll in checklist
                    Debug.Log("TodoList open");
                    gridObjectCollection = todoListMenu.transform.GetChild(i-1).GetChild(1).GetChild(0).GetChild(0).GetChild(0).gameObject;
                    Debug.Log("gridobjectcollection: " + gridObjectCollection);
                    RegisterTodoScroll();
                    RegisterTodoList();
                    RegisterSave();
                    UnregisterCheckListScroll();
                    save = todoListMenu.transform.GetChild(i-1).GetChild(1).GetChild(3).GetChild(1).gameObject;//update save game object
                    scrollPaginationButtons = todoListMenu.transform.GetChild(i-1).GetChild(1).GetChild(1).gameObject;//update scroll button

                    todoListMenu.transform.GetChild(i - 1).gameObject.SetActive(true);
                }
            }

        Debug.Log(2);
        Debug.Log(int.TryParse(msg, out int results));
        //todolist
        if (count == 1 && int.TryParse(msg, out int result))
        {
            for (int i = 0; i < CountList(); i++)
            {
                Debug.Log("toggle index: " + gridObjectCollection.transform.GetChild(i).GetComponent<ChecklistObject>().index);
                Debug.Log("comparing: " + (int.Parse(msg ) - 1).ToString());
                if (string.Equals(gridObjectCollection.transform.GetChild(i).GetComponent<ChecklistObject>().index.ToString(), (int.Parse(msg) - 1).ToString()))
                {
                    gridObjectCollection.transform.GetChild(i).GetComponent<ChecklistObject>().setToggle();//toggle
                    gridObjectCollection.transform.GetChild(i).GetChild(0).GetChild(2).GetComponent<ObjectController>().OnPointerClick();//highlight clicked
                    Debug.Log(gridObjectCollection.transform.GetChild(i).GetComponent<ChecklistObject>().index + " toggle and clicked");
                }

                else
                {
                    Debug.Log("Such item do not exist: " + msg);
                }
            }
        }

        Debug.Log(3);
        //save
        if (count == 1)
        {
            if (string.Equals("save", msg))
            {
                save.GetComponent<UploadToDrive>().startSave();
                Debug.Log("saved");
            }
        }

        Debug.Log(4);
        //up and down checklist
        //if (!isActive)
        //{
            if (string.Equals("upchecklist", msg))
            {
                checklistUpDown.GetComponent<ScrollablePagination>().ScrollByTier(-1);
                Debug.Log("upchecklist");
            }

            else if (string.Equals("downchecklist", msg))
            {
                checklistUpDown.GetComponent<ScrollablePagination>().ScrollByTier(1);
                Debug.Log("downchecklist");
            }
        //}

        Debug.Log(5);
        //up and down todolist
        if (count == 1)
        {
            if (string.Equals("uptodo", msg))
            {
                scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(-1);
                Debug.Log("uptodo");
            }

            else if (string.Equals("downtodo", msg))
            {
                scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(1);
                Debug.Log("downtodo");
            }
        }

       
        //else if (string.Equals("up", msg))
        //{
            //Debug.LogError("Up");
            //scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(-1);
        //}
        //else if (string.Equals("down", msg))
        //{
            //Debug.LogError("Down");
            //scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(1);
        //}
        //else if (string.Equals("save", msg))
        //{
            //save.GetComponent<UploadToDrive>().startSave();
        //}
        //else
        //{
            //list[int.Parse(msg) - 1].GetComponent<ChecklistObject>().setToggle();
            //list[int.Parse(msg) - 1].transform.GetChild(0).GetChild(2).GetComponent<ObjectController>().OnPointerClick();
        //}
    }

    private int CountList()
    {
        int count = 0;
        Debug.Log(gridObjectCollection.transform.childCount);
        Debug.Log(gridObjectCollection.transform.GetChild(0));
        Debug.Log(gridObjectCollection.transform.GetChild(0).gameObject);
        Debug.Log(gridObjectCollection.transform.GetChild(0).gameObject.activeSelf);
        for (int i = 0; i < gridObjectCollection.transform.childCount; i++)
        {
            if (gridObjectCollection.transform.GetChild(i).gameObject.activeSelf)
            {
                count++;
            }
        }

        return count;
    }
}
