using System.Net.Mime;
using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 打印工具
/// </summary>
public class DebugTool : MonoBehaviour
{
    private Camera mainCamera;
    private Text logInfo;

    private void Start()
    {
        mainCamera = Camera.main;
        if (logInfo == null)
        {
            logInfo = transform.Find("LogInfo").GetComponent<Text>();
        }
    }

    private void Update()
    {
        if (logInfo != null)
        {
            logInfo.text = string.Format("pos:{0},rot:{1},euler:{2}",
                    mainCamera.transform.position, mainCamera.transform.rotation, mainCamera.transform.eulerAngles);
        }
    }
}
