using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Microsoft.MixedReality.OpenXR.BasicSample;
using Microsoft.MixedReality.Toolkit.Examples.Demos;


public class ScrollCheckList2 : MonoBehaviour
{
    public GameObject mainMenuButton;
    public GameObject openCheckList;

    public GameObject allChecklistManager1;
    public GameObject closeChecklist;
    public GameObject container;//under allchecklistmanager1

    public GameObject todolistManager;

    private string list;
    private int index = 1;

    private GameObject buttonCollection;
    private GameObject todolist;
    private GameObject scrollPaginationButtons;

    private List<GameObject> handMenuList;
    private List<GameObject> checklistList;
    private List<GameObject> toDoListList;//this list will change content frequently
    // Start is called before the first frame update
    void Start()
    {
        handMenuList = new List<GameObject>();
        handMenuList.Add(null);
        handMenuList.Add(mainMenuButton);
        handMenuList.Add(openCheckList);
        handMenuList.Add(null);

        list = "handMenu";

        checklistList = new List<GameObject>();
        checklistList.Add(null);
        checklistList.Add(closeChecklist);//close checklist
        for (int i = 1; i < container.transform.childCount; i++)
        {
            checklistList.Add(container.transform.GetChild(i).gameObject);
        }
        checklistList.Add(null);

        toDoListList = new List<GameObject>();

        Highlight(index);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("clicked");
            Clicked();
        }

        if (Input.GetKeyDown(KeyCode.RightArrow))//downward
        {
            Debug.Log("downward");
            Down();
        }

        else if (Input.GetKeyDown(KeyCode.LeftArrow))//upward
        {
            Debug.Log("upward");
            Up();
        }
    }

    private void Clicked()//detect clicking in which list now
    {
        //hand menu
        if (string.Equals("handMenu", list) && index == 1)//main menu
        {
            SceneManager.LoadScene("MainMenu");
            
        }
        else if (string.Equals("handMenu", list) && index == 2)//open checklist
        {
            UnHighlight(index);//unhighlight hand menu
            allChecklistManager1.SetActive(true);

            index = 1;
            list = "checklist";
            Highlight(index);//highlight checklist
        }

        //checklist
        else if (string.Equals("checklist", list) && index == 1)//close checklist
        {
            UnHighlight(index);
            allChecklistManager1.SetActive(false);
            index = 1;
            list = "handMenu";
            Highlight(index);
        }
        else if (string.Equals("checklist", list) && index >= 2)///open todolist 1-?, index start from 2, -2
        {
            UnHighlight(index);

            //add todolist list
            todolist = todolistManager.transform.GetChild(index - 2).gameObject;
            Debug.Log("todolist: " + todolist);
            Debug.Log("todolist: " + todolist.name);
            Debug.Log("index: " + index);
            Debug.Log("index: " + (index - 2));
            Debug.Log("todolist: " + todolistManager.transform.GetChild(index - 2).gameObject);
            Debug.Log("todolist: " + todolistManager.transform.GetChild(index - 2).gameObject.name);
            buttonCollection = todolist.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).gameObject;
            toDoListList = new List<GameObject>();
            toDoListList.Add(null);
            toDoListList.Add(todolist.transform.GetChild(1).GetChild(2).GetChild(0).GetChild(1).gameObject);//close todolist
            for (int i = 0; i < CountList(); i++)//todolist checkbox
            {
                toDoListList.Add(todolist.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(i).gameObject);
            }
            toDoListList.Add(todolist.transform.GetChild(1).GetChild(3).GetChild(1).gameObject);//save
            toDoListList.Add(null);

            //add scrollPaginationButtons
            scrollPaginationButtons = todolist.transform.GetChild(1).GetChild(1).gameObject;

            todolist.SetActive(true);
            //todolistManager.transform.GetChild(index - 2).gameObject.SetActive(true);
            index = 1;
            list = "todoList";
            Highlight(index);
        }

        //todolist
        else if (string.Equals("todoList", list) && index == 1)//close todolist
        {
            UnHighlight(index);
            todolist.SetActive(false);
            index = 1;
            list = "checklist";
            Highlight(index);
        }

        else if (string.Equals("todoList", list) && index == CountList() + 2)//save   null, close, toggle, save
        {
            todolist.transform.GetChild(5).GetChild(1).GetComponent<UploadToDrive>().startSave();
        }

        else if (string.Equals("todoList", list) && index >= 2)//toggle
        {
            buttonCollection.transform.GetChild(index - 2).GetComponent<ChecklistObject>().setToggle();
            buttonCollection.transform.GetChild(index - 2).GetChild(0).GetChild(3).GetComponent<ObjectController>().OnPointerClick();
        }
    }

    private void Down()
    {
        //hand menu
        if (string.Equals("handMenu", list) && index != 3)
        {
            index++;
            Highlight(index);
            UnHighlight(index - 1);
            Debug.Log("index: " + index);
        }

        //checklist
        if (string.Equals("checklist", list) && index != container.transform.childCount)
        {
            index++;
            Highlight(index);
            UnHighlight(index - 1);
            Debug.Log("index: " + index);
        }

        //todolist
        if (string.Equals("todoList", list) && index != buttonCollection.transform.childCount + 3)
        {//null, close, button, save, null
            index++;
            Highlight(index);
            UnHighlight(index - 1);
            Debug.Log("index: " + index);
            //(toDoListList.Count - 4 - (index - 1)) != 2)
            if (index > 3 && !((toDoListList.Count - 4 - (index - 1)) <= 1))  //0,1, second last, last, index 2 first item   bug: 9 item, item 6 to 7 didnt go down
            {//scroll by 2 to go 3(when go to 3 from 2), scroll by 2 to go 4, scroll by 2 to go 5, scroll by 2 to go 6, scroll by 2 to go 7, no more scrolling down
                scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(2);
            }
        }
    }

    private void Up()
    {
        //hand menu
        if (string.Equals("handMenu", list) && index != 0)
        {
            index--;
            Highlight(index);
            UnHighlight(index + 1);
            Debug.Log("index: " + index);
        }

        //checklist
        if (string.Equals("checklist", list) && index != 0)
        {
            index--;
            Highlight(index);
            UnHighlight(index + 1);
            Debug.Log("index: " + index);
        }

        //todolist
        if (string.Equals("todoList", list) && index != 0)
        {
            index--;
            Highlight(index);
            UnHighlight(index + 1);
            Debug.Log("index: " + index);
            
            if (index < (toDoListList.Count - 4) && index != 3)//scroll by -2 from 8 to 7      example: 13, -4= 9 8th item
            {
                scrollPaginationButtons.GetComponent<ScrollablePagination>().ScrollByTier(-2);
            }
        }
    }

    private void Highlight(int index2)
    {
        //hand menu
        if (string.Equals("handMenu", list) && handMenuList[index2] != null)
        {
            handMenuList[index2].transform.Find("BackPlate").gameObject.SetActive(true);
        }

        //checklist
        if (string.Equals("checklist", list) && checklistList[index2] != null)
        {
            checklistList[index2].transform.Find("BackPlate").gameObject.SetActive(true);
        }

        //todolist
        if (string.Equals("todoList", list) && toDoListList[index2] != null)
        {
            toDoListList[index2].transform.Find("BackPlate").gameObject.SetActive(true);
        }
    }

    private void UnHighlight(int index2)
    {
        //hand menu
        if (string.Equals("handMenu", list) && handMenuList[index2] != null)
        {
            handMenuList[index2].transform.Find("BackPlate").gameObject.SetActive(false);
        }

        //checklist
        if (string.Equals("checklist", list) && checklistList[index2] != null)
        {
            checklistList[index2].transform.Find("BackPlate").gameObject.SetActive(false);
        }

        //todolist
        if (string.Equals("todoList", list) && toDoListList[index2] != null)
        {
            toDoListList[index2].transform.Find("BackPlate").gameObject.SetActive(false);
        }
    }

    private int CountList()
    {
        int count = 0;
        foreach (Transform child in buttonCollection.transform)
        {
            if (child.gameObject.activeSelf)
            {
                count++;
            }
        }
        return count;
    }
}
