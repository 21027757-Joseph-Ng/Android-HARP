#if UNITY_ANDROID
using System.Net.Sockets;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class Crosshair3DMy : MonoBehaviour
{
    private GameObject mainCamera = null;
    public float DistancetoCam = 90f;
    public Sprite normal = null;
    public Sprite gaze = null;
    private const float maxDistance = 2000.0f;
    private GameObject gazedAtObject = null;
    private Image renderImage;


    void Awake()
    {
        mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
        renderImage = transform.GetComponentInChildren<Image>();
    }


    void Update()
    {
        // Camera position
        Vector3 cameraPosition = mainCamera.transform.position;
        // Camera forward
        Vector3 cameraForward = mainCamera.transform.forward;
        // Camera rotation
        Quaternion lookAtRot = Quaternion.LookRotation(cameraForward);

        //update icon postion 
        transform.position = cameraPosition + (cameraForward * DistancetoCam);
        //update icon rotation 
        transform.rotation = lookAtRot;


        RaycastHit hit;
        if (Physics.Raycast(cameraPosition, cameraForward, out hit, maxDistance))
        {
            //GazedAtObject Event Triger
            if (gazedAtObject != hit.transform.gameObject)
            {
                if (gazedAtObject)
                gazedAtObject.SendMessage("OnPointerExit", SendMessageOptions.DontRequireReceiver);
                gazedAtObject = hit.transform.gameObject;
                gazedAtObject.SendMessage("OnPointerEnter", SendMessageOptions.DontRequireReceiver);

            }
            else
            {
                gazedAtObject.SendMessage("OnPointerStay", SendMessageOptions.DontRequireReceiver);
            }

            //Added

            if (gazedAtObject != null && (Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return)))
            {
                IPointerClickHandler clickHandler = gazedAtObject.gameObject.GetComponent<IPointerClickHandler>();
                PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
                clickHandler.OnPointerClick(pointerEventData);
                Debug.Log("Clicked On: " + gazedAtObject);
            }


            // Added

            // Change texture+
            if (hit.point.z < maxDistance)
                renderImage.sprite = gaze;
            else
                renderImage.sprite = normal;
        }
        else
        {
            renderImage.sprite = normal;
            if (gazedAtObject)
            {
                gazedAtObject.SendMessage("OnPointerExit", SendMessageOptions.DontRequireReceiver);
                gazedAtObject = null;
            }
        }

        
        // Checks for screen touches.
        if (string.Equals(SystemInfo.deviceModel.ToString(), "Rokid RG-crown")) {
            if (Google.XR.Cardboard.Api.IsTriggerPressed)
            {
                if (gazedAtObject)
                    gazedAtObject.SendMessage("OnPointerClick", SendMessageOptions.DontRequireReceiver);
            }
        }
        
    }
}
#endif