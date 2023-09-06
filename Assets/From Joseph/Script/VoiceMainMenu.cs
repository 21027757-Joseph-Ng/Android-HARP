using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Reflection;


public class VoiceMainMenu : MonoBehaviour
{
    public GameObject documentButton;
    public GameObject qrButton;

    private ClickedQRScanner clickedQRScanner;
    private ClickedGoogleDrive clickedDocument;
    private AndroidJavaObject currentActivity;
    public GameObject buttonCollections;
    private ClickedCheckList clickedCheckList;

    private static string[] units = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    private static string[] teens = { "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    private static string[] tens = { "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    private void Start()
    {
        //buttonCollections = GameObject.Find("GameObject").transform.GetChild(0).GetChild(0).GetChild(2).gameObject;
        clickedCheckList = buttonCollections.transform.Find("Checklist").GetComponent<ClickedCheckList>();
        clickedQRScanner = buttonCollections.transform.Find("QR Scanner").GetComponent<ClickedQRScanner>();
        clickedDocument = buttonCollections.transform.Find("Document Viewer").GetComponent<ClickedGoogleDrive>();
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");

        //Debug.Log("Device model: " + SystemInfo.deviceModel);
        //Debug.Log(SystemInfo.deviceModel.Equals("Rokid RG-crown"));
        //Debug.Log(string.Equals(SystemInfo.deviceModel.ToString(), "Rokid RG-crown"));
        //Debug.Log("Device name: " + SystemInfo.deviceName);
        //Debug.Log("Device Type" + SystemInfo.deviceType);
        //Debug.Log("OS: " + SystemInfo.operatingSystem);
        //Debug.Log("Graphic Device ID: " + SystemInfo.graphicsDeviceID);
    }

    private void Awake()
    {
        RegisterCommand();
    }

    private void OnDestroy()
    {
        UnRegisterCommand();
    }

    private void RegisterCommand()//name of button game object will be the key word of voice command, the new button need to be placed below the last button, but above title and banner game object
    {
        Debug.Log("ButtonCollections: " + buttonCollections);

        VoiceCommandLogic.Instance.AddInstrucEntity(1, "chek list", true, true, true, this.gameObject.name, "ColorRes", "chek");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "checklist", true, true, true, this.gameObject.name, "ColorRes", "checklist");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "document viewer", true, true, true, this.gameObject.name, "ColorRes", "document");
        VoiceCommandLogic.Instance.AddInstrucEntity(1, "Q R scanner", true, true, true, this.gameObject.name, "ColorRes", "qr");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "object recognition", true, true, true, this.gameObject.name, "ColorRes", "recognition");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "face detector", true, true, true, this.gameObject.name, "ColorRes", "face");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "measure", true, true, true, this.gameObject.name, "ColorRes", "measure");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "L T A verse", true, true, true, this.gameObject.name, "ColorRes", "lta");//same
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "indoor navigation", true, true, true, this.gameObject.name, "ColorRes", "navigation");
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "dynamic 3 6 5", true, true, true, this.gameObject.name, "ColorRes", "dynamic");//same for number
        //VoiceCommandLogic.Instance.AddInstrucEntity(1, "setting", true, true, true, this.gameObject.name, "ColorRes", "settings");

        for (int i = 1; i < buttonCollections.transform.childCount + 1; i++)
        {
            VoiceCommandLogic.Instance.AddInstrucEntity(1, buttonCollections.transform.GetChild(i - 1).gameObject.name, true, true, true, this.gameObject.name, "ColorRes", buttonCollections.transform.GetChild(i - 1).gameObject.name);
            Debug.Log(buttonCollections.transform.GetChild(i - 1));
        }

        for (int i = 1; i < buttonCollections.transform.childCount + 1; i++)
        {
            VoiceCommandLogic.Instance.AddInstrucEntity(1, "select item " + ConvertToWords(i), true, true, true, this.gameObject.name, "ColorRes", i.ToString());
        }
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstruct(1, "chek");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "checklist");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "document");
        VoiceCommandLogic.Instance.RemoveInstruct(1, "qr");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "recognition");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "face");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "measure");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "lta");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "navigation");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "dynamic");
        //VoiceCommandLogic.Instance.RemoveInstruct(1, "settings");

        //buttonCollections = GameObject.Find("GameObject").transform.GetChild(0).GetChild(0).GetChild(2).gameObject;//gameobject, canvas, main menu, buttoncollection

        Debug.Log(buttonCollections);
        Debug.Log(buttonCollections.transform.GetChild(0));
        Debug.Log(buttonCollections.transform.GetChild(0).gameObject.name);
        for (int i = 1; i < buttonCollections.transform.childCount + 1; i++)
        {
            VoiceCommandLogic.Instance.RemoveInstruct(1, buttonCollections.transform.GetChild(i - 1).gameObject.name);
        }

        for (int i = 1; i < buttonCollections.transform.childCount + 1; i++)
        {
            VoiceCommandLogic.Instance.RemoveInstruct(1, i.ToString());
        }
    }


    private void ColorRes(string msg)//the button game object require to attach a script "Clicked + any name", and within the script, there need to be a method name "Activate" which is for reaction of triggering the button
    {
        //custom voice command
        if (string.Equals("qr", msg))
        {
            Debug.LogError("QRScanner");
            clickedQRScanner.Activate();
        }

        else if (string.Equals("chek", msg))
        {
            Debug.LogError("Checklist");
            clickedCheckList.Activate();
        }

        Debug.LogError("ColorRes");
        //dynamic code, auto register the button for voice command
        for (int i = 1; i < buttonCollections.transform.childCount + 1; i++)
        {
            if (string.Equals(buttonCollections.transform.GetChild(i - 1).name, msg) || string.Equals(i.ToString(), msg)) {
                Debug.Log(buttonCollections.transform.GetChild(i - 1).name);

                Component[] components = buttonCollections.transform.GetChild(i - 1).GetComponents<Component>();

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
        }

            //if (string.Equals("checklist", msg) || string.Equals("1", msg))
            //{
            //Debug.LogError("Checklist");
            //SceneManager.LoadScene("CheckList");
            //}
            //else if (string.Equals("document", msg) || string.Equals("2", msg))
            //{
            //Debug.LogError("Document Viewer");
            //clickedDocument.OpenCloud();
            //}
            //else if (string.Equals("qr", msg) || string.Equals("3", msg))
            //{
            //Debug.LogError("QRScanner");
            //clickedQRScanner.LaunchQRScanner();
            //}
            //else if (string.Equals("recognition", msg) || string.Equals("4", msg))
            //{
            //Debug.LogError("Object Detect");
            //SceneManager.LoadScene("ObjectDetect");
            //}
            //else if (string.Equals("face", msg) || string.Equals("5", msg))
            //{
            //Debug.LogError("Face Detector");
            //SceneManager.LoadScene("FaceDetector");
            //}
            //else if (string.Equals("measure", msg) || string.Equals("6", msg))
            //{
            //Debug.LogError("Measure");
            //SceneManager.LoadScene("Measure");
            //}
            //else if (string.Equals("lta", msg) || string.Equals("7", msg))
            //{
            //Debug.LogError("LTA Verse");
            //SceneManager.LoadScene("DLAB");
            //}
            //else if (string.Equals("navigation", msg) || string.Equals("8", msg))
            //{
            //Debug.LogError("Indoor Navigation");
            //SceneManager.LoadScene("SampleScene");
            //}
            //else if (string.Equals("dynamic", msg) || string.Equals("9", msg))
            //{
            //Debug.LogError("Dynamic 365");
            //SceneManager.LoadScene("Dynamic365");
            //}
            //else if (string.Equals("settings", msg) || string.Equals("10", msg))
            //{
            //Debug.LogError("Settings");
            //SceneManager.LoadScene("Settings");
            //}
    }
     public static string ConvertToWords(int number)
    {
        if (number < 0 || number > 99)
        {
            return "Number out of range";
        }

        if (number == 0)
        {
            return units[0];
        }

        string words = "";

        if (number < 10)
        {
            words += units[number];
        }

        if ((number / 10) > 0)
        {
            if (number < 10)
            {
                words += units[number];
            }
            else if (number >= 11 && number <= 19)
            {
                words += teens[number - 11];
            }
            else
            {
                words += tens[number / 10 - 1];
                if ((number % 10) > 0)
                {
                    words += " " + units[number % 10];
                }
            }
        }

        return words;
    }
}
