using System.Runtime.CompilerServices;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/// <summary>
/// 功能设备检查工具
/// </summary>
public class DeviceAndFunctionCheck : MonoBehaviour
{
    public float delayTime;
    public Text tipInfo;
    private float elapsedTime;
    private bool checkValid;

    public FuncDeviceMatch.FuncEnum needCheckFunc;


    // Start is called before the first frame update
    void Start()
    {
        if (tipInfo == null)
        {
            tipInfo = transform.Find("tipInfo").GetComponent<Text>();
        }
        CheckDevice();
#if UNITY_EDITOR
        string osInfo = "Android OS 7.1.2 / API-25 (N2G47H/2.7.0-20220506-401101)";
        string minOSVersion = FuncDeviceMatch.GetOSVersion(osInfo);
        FuncDeviceMatch.Check("Rokid cyclopsX", "HandTracking", osInfo);
#endif
    }



    private void ShowTip(string msg)
    {
        if (tipInfo != null)
            tipInfo.text = msg;
    }

    public void CheckDevice()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            checkValid = FuncDeviceMatch.CheckFunc(needCheckFunc);
        }
        else
        {
            checkValid = true;
        }
    }

    private void Update()
    {
        if (tipInfo != null)
        {
            if (checkValid == false)
            {
                elapsedTime += UnityEngine.Time.deltaTime;
                ShowTip(string.Format("当前设备{0},不支持{1}功能,{2}秒后退出场景", SystemInfo.deviceModel, needCheckFunc.ToString(), (int)(delayTime - elapsedTime)));
                if (elapsedTime > delayTime)
                {
                    SceneManager.LoadScene(0);
                }
            }
        }
    }
}
