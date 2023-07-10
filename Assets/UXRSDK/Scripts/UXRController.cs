 using UnityEngine;
//using System.Collections;
//using UnityEngine.UI;
using System.Collections.Generic;
//using Pathfinding.Serialization.JsonFx;
using System;
using UnityEngine.SceneManagement;
//using System.IO;
//using UnityEngine.EventSystems;


//communicate with java codes
public class UXRController : MonoBehaviour
{

    static AndroidJavaClass UXRPlugin;

    void Awake()
    {
        Debug.Log("-UXR- Awake: ");

        AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
        UXRPlugin = new AndroidJavaClass("com.rokid.uxrplugin.UXRManager");

        Debug.Log("Awake: Call java init() method");
        UXRPlugin.CallStatic("init", jo);

        DontDestroyOnLoad(this.gameObject);

    }

    void OnEnable()
    {
        Debug.Log("-UXR- OnEnable");
    }

    void Start()
    {
        Debug.Log("-UXR- Start");
        //Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    void OnBecameVisible()
    {
        Debug.Log("-UXR- OnBecameVisible");
    }

    void OnBecameInVisible()
    {
        Debug.Log("-UXR- OnBecameinVisible");
    }

    void Update()
    {
        /*Event e = Event.current;
        if (e.isKey)
        {
            Debug.Log("-UXR-  -- key event: " + e.keyCode);
        }*/

        if (Application.platform == RuntimePlatform.Android && Input.GetKeyDown(KeyCode.Escape)) // 返回键
        {
            Debug.Log("-UXR- Input KeyCode Escape");
        }

        if (Application.platform == RuntimePlatform.Android && (Input.GetButtonDown("Fire1"))) //确定键
        {
            Debug.Log("-UXR- Input Fire1");
        }

        if (Application.platform == RuntimePlatform.Android && Input.GetKeyDown(KeyCode.JoystickButton0)) //yidao dpad center
        {
            Debug.Log("-UXR- Input KEYCODE_DPAD_CENTER");
        }

        if (Application.platform == RuntimePlatform.Android && Input.GetKeyDown(KeyCode.UpArrow)) // yidao dpad up
        {
            Debug.Log("-UXR- Input  UpArrow");
        }

        if (Application.platform == RuntimePlatform.Android && (Input.GetKeyDown((KeyCode.DownArrow)))) //yidao dpad down
        {
            Debug.Log("-UXR- Input DownArrow");
        }

        if (Application.platform == RuntimePlatform.Android && Input.GetKeyDown(KeyCode.LeftArrow)) // yidao dpad left
        {
            Debug.Log("-UXR- Input  LeftArrow");
        }

        if (Application.platform == RuntimePlatform.Android && (Input.GetKeyDown((KeyCode.RightArrow)))) //yidao dpad right
        {
            Debug.Log("-UXR- Input RightArrow");
        }
    }

    //获得或失去焦点，将focusStatus赋值给paused
    void OnApplicationFocus(bool focusStatus)
    {
        Debug.Log("-UXR- OnApplicationFocus:" + focusStatus);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        Debug.Log("-UXR- OnApplicationPause:" + pauseStatus);
    }


    void OnDisable()
    {
        Debug.Log("-UXR- OnDisable");
    }

    void OnDestroy()
    {
        Debug.Log("-UXR- OnDestroy");
    }

    //---------------------------------------------------------------------


    //called by Android BroadcastReceiver AppReceiver when ACTION_USB_DEVICE_ATTACHED
    public void MessageUSBDeviceATTACHED(string glassName)
    {
        Debug.Log("-UXR- MessageUSBDeviceATTACHED: " + glassName);

        //Reset current scene again when ACTION_USB_DEVICE_ATTACHED,to reset camera
        int sceneindex = SceneManager.GetActiveScene().buildIndex;
        Debug.Log("  -UXR- MUSBDeviceATTACHED, will reload scene:" + sceneindex);
        SceneManager.LoadScene(sceneindex);

    }

    //called by Android BroadcastReceiver AppReceiver when ACTION_USB_DEVICE_DETACHED
    public void MessageUSBDeviceDETACHED(string glassName)
    {
        Debug.Log("-UXR- MessageUSBDeviceDETACHED: " + glassName);

    }

    //get usb status form java
    // -1: unknown; 1: ATTACHED; 0: DETACHED
    public static int getUSBEventStatus()
    {
        int i = UXRPlugin.CallStatic<int>("getUSBEventStatus");
        return i;
    }

    public static void startAppbyPKG(String packagename)
    {
        UXRPlugin.CallStatic("openApp", (packagename));
    }

    public static void killProcessSelf()
    {
        Debug.Log("-UXR- LauncherController killProcessSelf");
        UXRPlugin.CallStatic("killProcessSelf");
    }
}
