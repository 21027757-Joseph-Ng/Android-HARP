using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadUtilities : MonoBehaviour
{
    // Start is called before the first frame update

    public SettingBool boolData;
    public GameObject[] children;

    void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        SetChildrenActive(boolData.settingON);
    }

    private void SetChildrenActive(bool active)
    {
        foreach (GameObject child in children)
        { 
            child.SetActive(active);
        }
    }
}
