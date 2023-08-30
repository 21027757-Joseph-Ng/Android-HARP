using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedMeasure : MonoBehaviour
{
    public void Activate()
    {
        SceneManager.LoadScene("Measure");
    }
}
