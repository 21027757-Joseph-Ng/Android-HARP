using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class UXRSDKConfig : ScriptableObject
{

    private static UXRSDKConfig s_Instance;

    private static UXRSDKConfig LoadInstance()
    {
        UnityEngine.Object obj = Resources.Load("UXRSDKConfig");
        if (obj == null)
        {
            Debug.LogError("Not Find SDK Config, Will Use Default App Config.");
            return null;
        }

        s_Instance = obj as UXRSDKConfig;

        UXRSDKConfig go = GameObject.Instantiate(s_Instance);

        s_Instance = go;

        return s_Instance;
    }

    public static UXRSDKConfig Instance
    {
        get
        {
            if (s_Instance == null)
            {
                s_Instance = LoadInstance();
            }

            return s_Instance;
        }
    }

    public void InitSDKConfig()
    {
        Debug.Log("Init[SDKConfig]");
    }



    public bool IsDebug = false;
    public bool RKInputActive = true;
    public bool RKVirtualActive = true;
    public bool OfflineVoiceActive = true;

}