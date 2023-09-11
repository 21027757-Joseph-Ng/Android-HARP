#if UNITY_ANDROID
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MySceneBack : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
        if (Application.platform == RuntimePlatform.Android && string.Equals(SystemInfo.deviceModel.ToString(), "Rokid RG-crown"))
        {
            Google.XR.Cardboard.Api.UpdateScreenParams();
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SceneManager.LoadScene(0);
            // Application.Quit();
        }
    }
}
#endif
