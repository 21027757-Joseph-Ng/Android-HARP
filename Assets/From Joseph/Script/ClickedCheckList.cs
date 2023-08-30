using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickedCheckList : MonoBehaviour
{
    public void Activate()
    {
        SceneManager.LoadScene("CheckList");
    }
}
