using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedObjectRecognition : MonoBehaviour
{
    public void Activate()
    {
        SceneManager.LoadScene("ObjectDetect");
    }
}
