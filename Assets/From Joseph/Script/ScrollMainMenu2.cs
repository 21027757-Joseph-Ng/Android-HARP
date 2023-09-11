using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;

public class ScrollMainMenu2 : MonoBehaviour
{
    public GameObject buttonCollection;

    private List<GameObject> list;
    private int index = 1;
    // Start is called before the first frame update
    void Start()
    {
        list = new List<GameObject>();
        list.Add(null);
        for (int i = 0; i < buttonCollection.transform.childCount; i++)
        {
            list.Add(buttonCollection.transform.GetChild(i).gameObject);
        }
        list.Add(null);

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

    private void Clicked()
    {
        list[index].GetComponent<Component>().GetType().Name.StartsWith("Clicked");

        Component[] components = list[index].GetComponents<Component>();

        foreach (Component component in components)
        {
            // Check if the component's type name starts with "Clicked"
            if (component.GetType().Name.StartsWith("Clicked"))
            {
                // Do something with the component
                Debug.Log("Component: " + component.GetType().Name);
                MethodInfo method = component.GetType().GetMethod("Activate");
                if (method != null)
                {
                    method.Invoke(component, null);
                }
                else
                {
                    Debug.Log("No 'Activate' method");
                }
            }
        }
    }

    private void Down()
    {
        if (index == buttonCollection.transform.childCount)
        {
            index++;
            UnHighlight(index - 1);
        }
        else if (index == 0)
        {
            index++;
            Highlight(index);
        }
        else if (index != buttonCollection.transform.childCount + 1)
        {
            index++;
            Highlight(index);
            UnHighlight(index - 1);
        }
    }

    private void Up()
    {
        if (index == 1)
        {
            index--;
            UnHighlight(index + 1);
        }
        else if (index == buttonCollection.transform.childCount + 1)
        {
            index--;
            Highlight(index);
        }
        else if (index != 0)
        {
            index--;
            Highlight(index);
            UnHighlight(index + 1);
        }
    }

    private void Highlight(int index2)
    {
        if (list[index2].transform.Find("BackPlate") != null)
        {
            list[index2].transform.Find("BackPlate").gameObject.SetActive(true);
        }
    }

    private void UnHighlight(int index2)
    {
        if (list[index2].transform.Find("BackPlate") != null)
        {
            list[index2].transform.Find("BackPlate").gameObject.SetActive(false);
        }
    }
}
