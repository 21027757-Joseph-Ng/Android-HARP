using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ShareStart : MonoBehaviour//attach to any game object, this script will load shared subscene additively
{
    private string sceneName; // The name of the scene to add additively

    private void OnEnable()
    {
        sceneName = "Shared";
        if (SceneManager.sceneCount == 1) {            
            SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
        }
    }

}
