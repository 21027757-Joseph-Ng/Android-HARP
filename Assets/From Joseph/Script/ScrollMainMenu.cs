using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScrollMainMenu : MonoBehaviour//attach to button collection
{
    public GameObject checklist;
    public GameObject document;
    public GameObject qr;
    public GameObject objects;
    public GameObject face;
    public GameObject measure;
    public GameObject lta;
    public GameObject indoor;
    public GameObject dynamic;
    public GameObject setting;

    private List<GameObject> list = new List<GameObject>();
    private int buttonIndex = 0;
    private AndroidJavaObject currentActivity;
    // Start is called before the first frame update
    void Start()
    {
        list.Add(checklist);
        list.Add(document);
        list.Add(qr);
        list.Add(objects);
        list.Add(face);
        list.Add(measure);
        list.Add(lta);
        list.Add(indoor);
        list.Add(dynamic);
        list.Add(setting);
        GetChild(buttonIndex);

        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
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

            else if (buttonIndex == 9)
            {
                buttonIndex++;
                DeactivateChild(buttonIndex - 1);
            }

            else if (buttonIndex != 10)//-1 0 1 2 3 4 5 6 7 8 9 10
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

            if (buttonIndex == 10)//biggest number? -1 0 1 2 3 4 5 6 7 8 9 10
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
            case 0://checklist
                Debug.Log("button1");
                SceneManager.LoadScene("CheckList");
                break;
            case 1://document viewer
                Debug.Log("button2");
                document.GetComponent<ClickedGoogleDrive>().OpenCloud();
                break;
            case 2://qr scanner
                qr.GetComponent<ClickedQRScanner>().LaunchQRScanner();
                break;
            case 3://object recognition
                Debug.Log("button4");
                SceneManager.LoadScene("ObjectDetect");
                break;
            case 4://face detector
                Debug.Log("button5");
                SceneManager.LoadScene("FaceDetector");
                break;
            case 5://measure
                Debug.Log("button6");
                SceneManager.LoadScene("Measure");
                break;
            case 6://ltaverse
                Debug.Log("button7");
                SceneManager.LoadScene("DLAB");
                break;
            case 7://indoor nav
                Debug.Log("button8");
                break;
            case 8://dynamic 365
                Debug.Log("button9");
                break;
            case 9://setting
                Debug.Log("button10");
                SceneManager.LoadScene("Settings");
                break;
        }
    }
}
