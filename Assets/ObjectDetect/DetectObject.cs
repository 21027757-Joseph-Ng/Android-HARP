using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using System;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.IO;
using Microsoft.MixedReality.OpenXR.BasicSample;


public class DetectObject : MonoBehaviour
{
    private bool m_Enter = false;

    private const int REQUEST_CODE_CAPTURE_PHOTO = 2;

    private AndroidJavaObject currentActivity;
    private AndroidJavaObject intentObject;

    public static DetectObject Instance;

        string deviceName;
        WebCamTexture webCam;
        public RawImage videoPreview;
        public GameObject videoObject;
        public GameObject handGestureObject;
        Texture2D sourceTex2D;
        RenderTexture renderTexture;
        private float elapseTime;
        public int FPS = 30;
        public GameObject objectParent;

        private bool startRecord = true;

        public GameObject images;

        private static float probabilityThreshold = 0.6f;
        Camera MRTKCam;
        RaycastHit rayCastHit;
        private static int _meshPhysicsLayer = 0;

        [SerializeField]
        private GameObject objectPrefab;

    public void OnPointerEnter()
    {
        m_Enter = true;
        VoiceCommandLogic.Instance.AddInstrucEntityZH("打开", "da kai", true, true, true, this.gameObject.name, "Open", "打开");
    }

    public void OnPointerExit()
    {
        m_Enter = false;
        VoiceCommandLogic.Instance.RemoveInstructZH("打开");
    }

        private void Start()
        {
            //InitVideo(1280, 720, 30);
            //ToggleGes("true");
        }

        private void Update()
    {

            //if (startRecord)
            //{
            //    elapseTime += Time.deltaTime;
            //    if (elapseTime > 1.0f / FPS)
            //    {
            //        elapseTime = 0;
            //        sourceTex2D = TextureToTexture2D(webCam);
            //        if (sourceTex2D == null)
            //        {
            //            Debug.Log("SourceTex2D is Null !!!");
            //        }
            //        else
            //        {
            //            Debug.Log("Enter Data to Buffer");
            //            UXRGesCamera.Instance.EnterVideoFrameBuffer(new UXRGesCamera.VideoFrame()
            //            {
            //                frameData = sourceTex2D.GetRawTextureData()
            //            });
            //        }
            //    }
            //}
        //}
    }
        //try to startactivityresult in unity and onactivityresult from java file
        private void OnEnable()
        {
            MRTKCam = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
        }

        public void CapturePhoto()
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        currentActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");

        AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
        intentObject = new AndroidJavaObject("android.content.Intent", "android.media.action.IMAGE_CAPTURE");

        currentActivity.Call("startActivityForResult", intentObject, REQUEST_CODE_CAPTURE_PHOTO);
    }

    public async void DetectObjects(string photoData)
    {
        byte[] photoBytes = System.Convert.FromBase64String(photoData);
        Debug.Log("3");
        Debug.Log(photoBytes);
        CustomVision faceDetect = gameObject.AddComponent<CustomVision>();
        Debug.Log("Taken photo!");
        var jsonResponse = await faceDetect.MakePredictionRequest(photoBytes);
        Debug.Log("4");
        Texture2D texture = new Texture2D(2, 2);
        texture.LoadImage(photoBytes);
        images.GetComponent<RawImage>().texture = texture;
        Debug.Log("5");

        CreateBoundingBox(jsonResponse);
    }

    public async void CreateBoundingBox(CustomVisionAnalysisObject jsonContent)
    {
            Debug.Log("starting bounding box");
            Transform cameraTransform = GameObject.FindGameObjectWithTag("MainCamera").transform;
            var heightFactor = Screen.height / Screen.width;
            var topCorner = cameraTransform.position + cameraTransform.forward -
                            cameraTransform.right / 2f +
                            cameraTransform.up * heightFactor / 2f;



            var sortedPredictions = jsonContent.predictions.OrderBy(p => p.probability).ToList().FindAll(e => e.probability > probabilityThreshold);

            foreach (Prediction prediction in sortedPredictions)
            {
                Debug.Log(prediction.tagName + ", " + prediction.probability);
                CreatePoint(prediction, heightFactor, topCorner, cameraTransform);

            }
            if (!images.activeSelf) images.SetActive(true);
            Debug.Log("Starting prediction");
        }

        private void CreatePoint(Prediction p, int heightFactor, Vector3 topCorner, Transform cameraTransform)
        {
            var center = GetCenter(p);
            Debug.Log("Center of point: " + center);
            var recognizedPos = topCorner + cameraTransform.right * center.x -
                                cameraTransform.up * center.y * heightFactor;
            Debug.Log("Recognised Pos:  " + recognizedPos);

            //Ray ray = MRTKCam.ScreenPointToRay(recognizedPos);
            //Debug.Log(Physics.Raycast(ray.origin, ray.direction, out rayCastHit, Mathf.Infinity, GetSpatialMeshMask()));

            //Debug.Log(rayCastHit.point);

            var label = objectPrefab;
            label.GetComponentInChildren<TextMeshPro>().text = p.tagName;
            //var label = Instantiate(objectPrefab);
            //label.GetComponentInChildren<ToolTip>().ToolTipText = p.tagName;
            //label.transform.localScale = new Vector3(0.8f, 0.8f, 0.8f);
            //label.transform.localPosition = new Vector3(recognizedPos.x, rayCastHit.point.y, rayCastHit.point.z);
            //label.transform.parent = objectParent.transform;
        }

        private static int GetSpatialMeshMask()
        {
            if (_meshPhysicsLayer == 0)
            {
                var spatialMappingConfig =
                  CoreServices.SpatialAwarenessSystem.ConfigurationProfile as
                    MixedRealitySpatialAwarenessSystemProfile;
                if (spatialMappingConfig != null)
                {
                    foreach (var config in spatialMappingConfig.ObserverConfigurations)
                    {
                        var observerProfile = config.ObserverProfile
                            as MixedRealitySpatialAwarenessMeshObserverProfile;
                        if (observerProfile != null)
                        {
                            _meshPhysicsLayer |= (1 << observerProfile.MeshPhysicsLayer);
                        }
                    }
                }
            }

            return _meshPhysicsLayer;
        }

        private Vector2 GetCenter(Prediction p)
        {
            return new Vector2((float)(p.boundingBox.left + (0.5 * p.boundingBox.width)),
                (float)(p.boundingBox.top + (0.5 * p.boundingBox.height)));
        }

        //private void InitVideo(int width, int height, int fps)
        //{
        //    Debug.Log("Init Video");
        //    WebCamDevice[] devices = WebCamTexture.devices;
        //    if (devices.Length < 1)
        //    {
        //        Debug.Log("设备上未找到摄像头,请检查设备");
        //        return;
        //    }
        //    deviceName = devices[0].name;
        //    webCam = new WebCamTexture(deviceName, width, height, fps);//设置宽、高和帧率   
        //    RawImage preview = videoPreview;
        //    preview.texture = webCam;
        //    preview.color = Color.white;
        //    webCam.Play();
        //    if (Application.platform == RuntimePlatform.Android)
        //    {
        //        UXRGesCamera.Instance.GesInit(width, height);
        //    }
        //}

        //private Texture2D TextureToTexture2D(Texture texture)
        //{
        //    if (sourceTex2D == null)
        //    {
        //        sourceTex2D = new Texture2D(texture.width, texture.height, TextureFormat.BGRA32, false);
        //        sourceTex2D.filterMode = FilterMode.Point;
        //    }

        //    if (renderTexture == null)
        //    {
        //        renderTexture = new RenderTexture(texture.width, texture.height, 24);
        //        renderTexture.filterMode = FilterMode.Point;
        //        renderTexture.antiAliasing = 8;
        //    }

        //    RenderTexture.active = renderTexture;
        //    Graphics.Blit(texture, renderTexture);
        //    sourceTex2D.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0);
        //    sourceTex2D.Apply();
        //    RenderTexture.active = null;
        //    return sourceTex2D;
        //}

        //private void ToggleGes(string args)
        //{
        //    Debug.Log("ToggleGes args:" + args);
        //    if (args == "true")
        //    {
        //        Debug.Log("开启手势...");
        //        UXRGesCamera.Instance.GesStart();
        //        startRecord = true;
        //        handGestureObject.GetComponent<RKGesSampleInteraction>().openGes = true;
        //    }
        //    else if (args == "false")
        //    {
        //        Debug.Log("关闭手势...");
        //        UXRGesCamera.Instance.GesStop();
        //        startRecord = false;
        //        handGestureObject.GetComponent<RKGesSampleInteraction>().openGes = false;
        //    }
        //}

        public void onClickButton()
        {
            //webCam.Stop(); // To Test
            //videoObject.SetActive(false);
            //startRecord = false;

            Debug.Log("2");
            CapturePhoto();
            Debug.Log("1");
        }
    }

