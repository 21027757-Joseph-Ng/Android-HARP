using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedSetting : MonoBehaviour
{
    public void Activate()
    {
        SceneManager.LoadScene("Settings");
    }
}
