using UnityEngine;
using Pathfinding.Serialization.JsonFx;

public class UXRGesController : MonoBehaviour
{
    public static RKGestureEvent s_Event;
    private AndroidJavaObject m_GestureJC;

    private bool m_IsConnect = false;
    private bool m_IsStart = false;

    #region 生命周期

    private void Awake()
    {

        s_Event = null;
        m_GestureJC = new AndroidJavaClass("com.rokid.uxrplugin.gesture.RKGestureSession").CallStatic<AndroidJavaObject>("getInstance");
        //GesInit();				//com.rokid.uxrplugin.activity.UXRUnityActivity已处理GesInit
    }

    private void Start()
    {
        //GesConnect();				//com.rokid.uxrplugin.activity.UXRUnityActivity已处理GesConnect
    }

    private void OnDestroy()
    {
        //GesDisconnect();			//com.rokid.uxrplugin.activity.UXRUnityActivity已处理GesDisconnect
    }

    private void OnEnable()
    {
        GesStart();
    }

    private void OnDisable()
    {
        GesStop();
    }

    private void OnApplicationPause(bool pause)
    {
        Debug.LogError("OnApplicationPause:" + pause);
        if (pause)
        {
            GesStop();
        }
        else
        {
            GesStart();
        }
    }

    #endregion

    #region Gesture Android Api

    /// <summary>
    /// 初始化手势
    /// </summary>
    private void GesInit()
    {
        AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");

        m_GestureJC.Call("init", jo);
    }

    /// <summary>
    /// 手势Connect
    /// </summary>
    private void GesConnect()
    {
        if (m_IsConnect) return;
        m_GestureJC.Call("gesConnect");
        m_IsConnect = true;
    }

    /// <summary>
    /// 手势DisConnect
    /// </summary>
    private void GesDisconnect()
    {
        if (!m_IsConnect) return;
        m_GestureJC.Call("gesDisconnect");
        m_IsConnect = false;
    }

    /// <summary>
    /// 手势Start
    /// </summary>
    private void GesStart()
    {
        Debug.Log("GesStart");
        if (m_IsStart) return;
        m_GestureJC.Call("gesStart");
        m_IsStart = true;
    }

    /// <summary>
    /// 手势Stop
    /// </summary>
    private void GesStop()
    {
        Debug.Log("GesStop");
        if (!m_IsStart) return;
        m_GestureJC.Call("gesStop");
        m_IsStart = false;
    }

    #endregion

    /// <summary>
    /// 接收安卓回调
    /// </summary>
    public void MessageGesture(string json)
    {
        s_Event = JsonReader.Deserialize<RKGestureEvent>(json);
        //Debug.Log("-uxr- onGes: "+ json);
    }
}
