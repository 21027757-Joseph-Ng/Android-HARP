using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedFaceDetector : MonoBehaviour
{
    public void Activate()
    {
        SceneManager.LoadScene("FaceDetector");
    }
}
