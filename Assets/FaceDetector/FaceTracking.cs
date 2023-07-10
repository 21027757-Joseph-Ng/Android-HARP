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


#if ENABLE_WINMD_SUPPORT
using Windows.Media.Capture;
using System;
#endif

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class FaceTracking : MonoBehaviour
    {
        /// <summary>
        /// Sets the probability threshold for the facial detection
        /// </summary>
        private static float probabilityThreshold = 0.6f;

        /// <summary>
        /// Sets an Instance for the FaceTracking so that other methods are able to access the methods
        /// </summary>
        public static FaceTracking Instance;

        /// <summary>
        /// Locks the bool to the camera available
        /// </summary>
        private bool camAvailable;

        /// <summary>
        /// Runs the Hololens camera with UnityEngine's camera
        /// </summary>
        private WebCamTexture cam;

        ///// <summary>
        ///// Spawns cursor for the Main Camera
        ///// </summary>
        //private Texture defaultBackground;

        /// <summary>
        /// Shows the live view of Hololens camera
        /// </summary>
        public RawImage background;

        /// <summary>
        /// Scales the picture shown to the Hololens aspect ratio
        /// </summary>
        public AspectRatioFitter fit;

        /// <summary>
        /// Gets the Face Label
        /// </summary>
        [SerializeField]
        private GameObject objectPrefab;

        /// <summary>
        /// Shows the static image when the face is detected
        /// </summary>
        public RawImage viewTakenPhoto;

        /// <summary>
        /// Sets the aspect ratio for the static image when the face is detected
        /// </summary>
        public AspectRatioFitter viewTakenPhotoFit;

        /// <summary>
        /// To unhide static image when face detected
        /// </summary>
        public GameObject images;

        /// <summary>
        /// To get Main Camera
        /// </summary>
        private GameObject camera;

        /// <summary>
        /// To get Main Camera
        /// </summary>
        private void Awake()
        {
            Instance = this;

        }

        /// <summary>
        /// Starts the live view of the camera when the scene is loaded and active
        /// </summary>
        private void OnEnable()
        {
            camera = GameObject.FindGameObjectWithTag("MainCamera");
            //defaultBackground = background.texture;
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
        /// Stops the camera when the Scene is unloaded
        /// </summary>
        private void OnDisable()
        {
            cam.Stop();
        }

        /// <summary>
        /// Takes photo from the Hololens camera and starts to detect faces from the image
        /// </summary>
        public async void TakePhoto()
        {
            Texture2D texture2D = new Texture2D(cam.width, cam.height);
            texture2D.SetPixels32(cam.GetPixels32());
            viewTakenPhoto.texture = texture2D;
            float ratio = (float)cam.width / (float)cam.height;
            viewTakenPhotoFit.aspectRatio = ratio;
            float scaleY = cam.videoVerticallyMirrored ? -1f : 1f;
            viewTakenPhoto.rectTransform.localScale = new Vector3(1f, scaleY, 1f);

            int orient = -cam.videoRotationAngle;

            viewTakenPhoto.rectTransform.localEulerAngles = new Vector3(0, 0, orient);

            Debug.Log("Taking photo!!");
            Texture2D _texture2D = new Texture2D(cam.width, cam.height);
            
            _texture2D.SetPixels32(cam.GetPixels32());
            byte[] bArray = _texture2D.EncodeToPNG();
            _texture2D.Apply();
            viewTakenPhoto.texture = _texture2D;
            
            // to test on unity editor without taking picture
#if UNITY_EDITOR
            string imgPath = "C:/Users/Pravind/Pictures/Obama/download.jpg";
            FileStream fileStream = new FileStream(imgPath, FileMode.Open, FileAccess.Read);
            BinaryReader binaryReader = new BinaryReader(fileStream);
            bArray = binaryReader.ReadBytes((int)fileStream.Length);
            Debug.Log(imgPath);
#endif
            FaceRequestor faceRequestor = gameObject.AddComponent<FaceRequestor>();
            Debug.Log("Taken photo!");
            await faceRequestor.DetectFacesFromImage(bArray);
            Debug.Log("Finished Face API");

        }

        /// <summary>
        /// Updates the Face Label if there is a face detected
        /// </summary>
        public async void CreateBoundingBox(IdentifiedPerson_RootObject identifiedPerson)
        {
            Debug.Log("starting bounding box");
            if (!images.activeSelf) images.SetActive(true);
            var label = objectPrefab;
            label.GetComponentInChildren<TextMeshPro>().text = identifiedPerson.name;

            Debug.Log("done with label");

        }
    }
}
