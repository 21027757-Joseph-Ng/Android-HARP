using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{

    public string SceneName;
    public void OpenScene()
    {
        SceneManager.LoadScene(SceneName);
    }

    public void OpenTest()
    {
        SceneManager.LoadScene("uxr00 - MainScene");
    }
}
