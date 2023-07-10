using System.Threading;
using System.Globalization;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using Pathfinding.Serialization.JsonFx;

public class UXRGesCamera : MonoBehaviour
{
    public class VideoFrame
    {
        public byte[] frameData;
    }
    public static RKGestureEvent s_Event;
    private AndroidJavaObject m_GesCamera;
    private bool m_IsConnect = false;
    private bool m_IsStart = false;

    [SerializeField]
    private int width = 1920;
    [SerializeField]
    private int height = 1080;

    private static Queue<VideoFrame> frameBuffers = new Queue<VideoFrame>(256);
    #region 生命周期

    private static UXRGesCamera instance;

    private Thread sendData;

    public static UXRGesCamera Instance
    {
        get
        {
            if (instance == null)
            {
                GameObject go = new GameObject("UXRGes");
                instance = go.AddComponent<UXRGesCamera>();
            }
            return instance;
        }
    }


    private void OnEnable()
    {
        if (m_IsStart)
        {
            GesStart(width, height);
        }
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
            GesStart(width, height);
        }
    }

    #endregion

    #region Gesture Android Api

    /// <summary>
    /// 初始化手势
    /// </summary>
    public void GesInit(int width, int height)
    {
        this.width = width;
        this.height = height;
        Debug.Log("Ges Init !!!!");
        s_Event = null;
        AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaClass jc1 = new AndroidJavaClass("com.rokid.uxrplugin.gesture.RKGestureSession");
        if (jc1 == null)
        {
            Debug.Log("jc1 is null !!!!!!");
        }
        m_GesCamera = jc1.CallStatic<AndroidJavaObject>("getInstance");
        if (m_GesCamera == null)
        {
            Debug.Log(" Gestrure is null !!!!!!");
        }
        else
        {
            Debug.Log("GesCamera 不为空,开始Ges...");
        }
    }

    /// <summary>
    /// 手势Connect
    /// </summary>
    private void GesConnect()
    {
        if (m_IsConnect) return;
        if (m_GesCamera != null)
            m_GesCamera.Call("gesConnect");
        m_IsConnect = true;
    }

    /// <summary>
    /// 手势DisConnect
    /// </summary>
    private void GesDisconnect()
    {
        if (!m_IsConnect) return;
        if (m_GesCamera != null)
            m_GesCamera.Call("gesDisconnect");
        m_IsConnect = false;
    }

    public void GesStart()
    {
        GesStart(width, height);
    }

    /// <summary>
    /// 手势Start
    /// </summary>
    private void GesStart(int width, int height)
    {
        if (m_IsStart) return;
        m_IsStart = true;
        Debug.Log("Gestrure Camera  Start");
        NativeInterface.NativeAPI.initBufferProvider(width, height);
        if (m_GesCamera != null)
        {
            m_GesCamera.Call("startOverrideCamera", width, height);
            sendData = new Thread(() =>
            {
                while (m_IsStart)
                {
                    if (frameBuffers.Count > 0)
                    {
                        VideoFrame frame = frameBuffers.Dequeue();
                        Debug.Log("send video data :" + frame.frameData.Length);
                        NativeInterface.NativeAPI.copyBuffer2Cyc(frame.frameData, frame.frameData.Length);
                        Thread.Sleep(10);
                    }
                }
            });
            sendData.Start();
        }
        else
        {
            Debug.Log("m_GesCamera is null 无法进行初始化");
        }
    }

    /// <summary>
    /// 手势Stop
    /// </summary>
    public void GesStop()
    {
        Debug.Log("GesStop");
        if (!m_IsStart) return;
        m_IsStart = false;
        if (m_GesCamera != null)
        {
            m_GesCamera.Call("stopOverrideCamera");
            NativeInterface.NativeAPI.cleanBufferProvider();
            sendData.Abort();
        }
    }

    public void EnterVideoFrameBuffer(VideoFrame frame)
    {
        //添加帧数据...
        frameBuffers.Enqueue(frame);
    }


    #endregion

    /// <summary>
    /// 接收安卓回调
    /// </summary>
    public void MessageGesture(string json)
    {
        Debug.Log("-uxr- onGes: " + json);
        s_Event = JsonReader.Deserialize<RKGestureEvent>(json);
    }
}
