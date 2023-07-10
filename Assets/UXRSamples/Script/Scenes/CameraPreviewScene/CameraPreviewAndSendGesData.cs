using System.Security.Cryptography;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraPreviewAndSendGesData : MonoBehaviour
{
    string deviceName;
    WebCamTexture webCam;
    Texture2D sourceTex2D;
    RenderTexture renderTexture;
    private float elapseTime;
    public int FPS = 30;
    private bool startRecord = false;


    void Start()
    {
        InitVideo(1280, 720, 30);
        RegisterCommand();
        // 测试,开启手势
        // ToggleGes("true");
    }

    private void OnDestroy()
    {
        UnRegisterCommand();
    }

    private void RegisterCommand()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            Debug.Log(this.gameObject.name);
            VoiceCommandLogic.Instance.AddInstrucEntityZH("开启手势", "kai qi shou shi", true, true, true, this.gameObject.name, "ToggleGes", "true");
            VoiceCommandLogic.Instance.AddInstrucEntityZH("关闭手势", "guan bi shou shi", true, true, true, this.gameObject.name, "ToggleGes", "false");
        }
    }

    private void ToggleGes(string args)
    {
        Debug.Log("ToggleGes args:" + args);
        if (args == "true")
        {
            Debug.Log("开启手势...");
            UXRGesCamera.Instance.GesStart();
            startRecord = true;
            this.GetComponent<RKGesSampleInteraction>().openGes = true;
        }
        else if (args == "false")
        {
            Debug.Log("关闭手势...");
            UXRGesCamera.Instance.GesStop();
            startRecord = false;
            this.GetComponent<RKGesSampleInteraction>().openGes = false;
        }
    }

    private void UnRegisterCommand()
    {
        VoiceCommandLogic.Instance.RemoveInstructZH("开启手势");
        VoiceCommandLogic.Instance.RemoveInstructZH("关闭手势");
    }

    private void InitVideo(int width, int height, int fps)
    {
        Debug.Log("Init Video");
        WebCamDevice[] devices = WebCamTexture.devices;
        if (devices.Length < 1)
        {
            Debug.Log("设备上未找到摄像头,请检查设备");
            return;
        }
        deviceName = devices[0].name;
        webCam = new WebCamTexture(deviceName, width, height, fps);//设置宽、高和帧率   
        RawImage preview = this.GetComponentInChildren<RawImage>();
        preview.texture = webCam;
        preview.color = Color.white;
        webCam.Play();
        if (Application.platform == RuntimePlatform.Android)
        {
            UXRGesCamera.Instance.GesInit(width, height);
        }
    }
    private void Update()
    {
        if (startRecord)
        {
            elapseTime += Time.deltaTime;
            if (elapseTime > 1.0f / FPS)
            {
                elapseTime = 0;
                sourceTex2D = TextureToTexture2D(webCam);
                if (sourceTex2D == null)
                {
                    Debug.Log("SourceTex2D is Null !!!");
                }
                else
                {
                    Debug.Log("Enter Data to Buffer");
                    UXRGesCamera.Instance.EnterVideoFrameBuffer(new UXRGesCamera.VideoFrame()
                    {
                        frameData = sourceTex2D.GetRawTextureData()
                    });
                }
            }
        }
    }

    private Texture2D TextureToTexture2D(Texture texture)
    {
        if (sourceTex2D == null)
        {
            sourceTex2D = new Texture2D(texture.width, texture.height, TextureFormat.BGRA32, false);
            sourceTex2D.filterMode = FilterMode.Point;
        }

        if (renderTexture == null)
        {
            renderTexture = new RenderTexture(texture.width, texture.height, 24);
            renderTexture.filterMode = FilterMode.Point;
            renderTexture.antiAliasing = 8;
        }

        RenderTexture.active = renderTexture;
        Graphics.Blit(texture, renderTexture);
        sourceTex2D.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0);
        sourceTex2D.Apply();
        RenderTexture.active = null;
        return sourceTex2D;
    }
}
