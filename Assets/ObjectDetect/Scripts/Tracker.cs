using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


#if ENABLE_WINMD_SUPPORT
using Windows.Media.Capture;
using System;
#endif

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class Tracker : MonoBehaviour
    {
        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        Camera MRTKCam;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        RaycastHit rayCastHit;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private static Vector3 cameraPos = new Vector3(0, 0, 0);

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private static float probabilityThreshold = 0.6f;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private static int _meshPhysicsLayer = 0;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        public static Tracker Instance;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private bool camAvailable;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private WebCamTexture cam;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private Texture defaultBackground;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        public RawImage background;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        public AspectRatioFitter fit;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        [SerializeField]
        private GameObject objectPrefab;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        public GameObject objectParent;

        /// <summary>
        /// Creates an instance of Tracker so that its methods can be used by other classes
        /// </summary>
        private void Awake()
        {
            Instance = this;
        }

        /// <summary>
        /// Starts running the hololens camera with a live view when the scene is loaded
        /// </summary>
        private void OnEnable()
        {
            MRTKCam = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
            defaultBackground = background.texture;
            WebCamDevice[] devices = WebCamTexture.devices;

            if (devices.Length == 0)
            {
                Debug.Log("No camera detected");
                camAvailable = false;
                return;
            }

            cam = new WebCamTexture(devices[0].name, Screen.width, Screen.height);
            if (cam==null)
            {
                Debug.Log("Unable to find back camera");
                return;
            }
            cam.Play();
            background.texture = cam;
            camAvailable = true;

            if (!camAvailable) return;

            float ratio = (float)cam.width / (float)cam.height;
            fit.aspectRatio = ratio;
            float scaleY = cam.videoVerticallyMirrored ? -1f : 1f;
            background.rectTransform.localScale = new Vector3(1f, scaleY, 1f);

            int orient = -cam.videoRotationAngle;
            background.rectTransform.localEulerAngles = new Vector3(0, 0, orient);
        }


        /// <summary>
        /// Stops the Hololens camera when the scene is unloaded
        /// </summary>
        private void OnDisable()
        {
            cam.Stop();
        }

        /// <summary>
        /// Takes a picture of the current view from the camera and makes a prediction request
        /// </summary>
        public async void TakePhoto()
        {
            cameraPos = CameraCache.Main.transform.position;
            Debug.Log("Taking photo!!");
            Texture2D _texture2D = new Texture2D(cam.width, cam.height);
            
            _texture2D.SetPixels32(cam.GetPixels32());
            CustomVision customVision = gameObject.AddComponent<CustomVision>();
            byte[] bArray = _texture2D.EncodeToPNG();
            Debug.Log("Taken photo!");
            var jsonResponse = await CustomVision.Instance.MakePredictionRequest(bArray);
            Debug.Log("Finished CustomVision");

            CreateBoundingBox(jsonResponse);

        }

        /// <summary>
        /// Creates a tooltip around the object with the object label
        /// </summary>
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
            Debug.Log("Starting prediction");
        }

        /// <summary>
        /// Calculate the 3D point of the object from the API return
        /// </summary>
        private void CreatePoint(Prediction p, int heightFactor, Vector3 topCorner, Transform cameraTransform)
        {
            var center = GetCenter(p);
            Debug.Log("Center of point: " + center);
            var recognizedPos = topCorner + cameraTransform.right * center.x -
                                cameraTransform.up * center.y * heightFactor;
            Debug.Log("Recognised Pos:  " + recognizedPos);

            Ray ray = MRTKCam.ScreenPointToRay(recognizedPos);
            Debug.Log(Physics.Raycast(ray.origin, ray.direction, out rayCastHit, Mathf.Infinity, GetSpatialMeshMask()));

            Debug.Log(rayCastHit.point);


            var label = Instantiate(objectPrefab);
            label.GetComponentInChildren<ToolTip>().ToolTipText = p.tagName;
            label.transform.localScale = new Vector3(0.8f, 0.8f, 0.8f);
            label.transform.localPosition = new Vector3(recognizedPos.x, rayCastHit.point.y, rayCastHit.point.z);
            label.transform.parent = objectParent.transform;
        }

        /// <summary>
        /// Gets the Hololens Spatial Mesh Physics Layer
        /// </summary>
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


        /// <summary>
        /// Calculates the x and y coordinations from bounding box
        /// </summary>
        private Vector2 GetCenter(Prediction p)
        {
            return new Vector2((float)(p.boundingBox.left + (0.5 * p.boundingBox.width)),
                (float)(p.boundingBox.top + (0.5 * p.boundingBox.height)));
        }
       
    }
}
