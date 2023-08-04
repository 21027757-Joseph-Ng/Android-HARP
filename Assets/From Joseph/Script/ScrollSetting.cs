using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScrollSetting : MonoBehaviour//attach to "main menu" menu
{
    public GameObject mainMenu;
    public GameObject utilities;
    public GameObject profiler;

    private List<GameObject> list = new List<GameObject>();
    private int buttonIndex = 0;
    // Start is called before the first frame update
    void Start()
    {
        list.Add(mainMenu);
        list.Add(utilities);
        list.Add(profiler);

        GetChild(buttonIndex);

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))//forward
        {
            Debug.Log("forward");

            if (buttonIndex == -1)
            {
                buttonIndex++;
                GetChild(buttonIndex);
            }


            else if (buttonIndex == 2)
            {
                buttonIndex++;
                DeactivateChild(buttonIndex - 1);
            }

            else if (buttonIndex != 3)// -1 0 1 2 3
            {
                buttonIndex++;
                GetChild(buttonIndex);
                DeactivateChild(buttonIndex - 1);
                Debug.Log(buttonIndex);
            }
        }

        else if (Input.GetKeyDown(KeyCode.LeftArrow))//backward
        {
            Debug.Log("backward");
            if (buttonIndex == 0)
            {
                buttonIndex--;
                DeactivateChild(buttonIndex + 1);
            }

            else if (buttonIndex == 3)//biggest number? -1 0 1 2 3
            {
                buttonIndex--;
                GetChild(buttonIndex);
            }

            else if (buttonIndex != -1)//smallest number?
            {
                buttonIndex--;
                GetChild(buttonIndex);
                DeactivateChild(buttonIndex + 1);
                Debug.Log(buttonIndex);
            }
        }

        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
        {
            if (buttonIndex != 10 || buttonIndex != -1)
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
            case 1://utilities
                utilities.GetComponent<ClickedEventUtil>().ToToggle();
                Debug.Log("button2");
                break;
            case 2://profiler
                profiler.GetComponent<ClickedEventProfile>();//nothing yet
                break;
        }
    }
}
