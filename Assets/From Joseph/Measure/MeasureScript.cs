using UnityEngine;
using TMPro;
using Microsoft.MixedReality.Toolkit.Input;

namespace LTA.Holoapp
{
    public class MeasureScript : MonoBehaviour, IMixedRealityPointerHandler
    {
        public GameObject firstPin = default;
        public GameObject secondPin = default;
        public TextMeshPro textField = default;
        public LineRenderer line = default;
        public float dist = default;
        Vector3 myVector = default;
        // Start is called before the first frame update

        void Start()
        {
            secondPin.SetActive(false);
            myVector = new Vector3(0.025f, 0.025f, 0.025f);
            firstPin.name = "first";
            secondPin.name = "second";
            line = gameObject.AddComponent<LineRenderer>();
            line.material = new Material(Shader.Find("Sprites/Default"));
            line.widthMultiplier = 0.005f;
            line.startColor = Color.blue;
            line.endColor = Color.blue;
            line.positionCount = 2;            

        }

        // Update is called once per frame
        void Update()
        {
            line.SetPosition(0, firstPin.transform.position);
            line.SetPosition(1, secondPin.transform.position);
            try
            {
                dist = Vector3.Distance(GameObject.Find("first").transform.position * 100, GameObject.Find("second").transform.position * 100);
                textField.text = dist.ToString("0.0") + "cm";
                textField.transform.position = (firstPin.transform.position + secondPin.transform.position) / 2;
            }
            catch
            {

            }
           

            //first.text = (GameObject.Find("first").transform.position*100).ToString("0.0");
            //second.text = (GameObject.Find("second").transform.position*100).ToString("0.0");
            // Bit shift the index of the layer (8) to get a bit mask
            int layerMask = 1 << 8;

            // This would cast rays only against colliders in layer 8.
            // But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
            layerMask = ~layerMask;

            RaycastHit hit;
            // Does the ray intersect any objects excluding the player layer
            if (Physics.Raycast(firstPin.transform.position, firstPin.transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
            {
                /*firstPin.transform.position = hit.point;*/
/*                var distance = (hit.transform.position - firstPin.transform.position).magnitude;
                firstPin.transform.localScale = Vector3.one * distance;*/
                var distance = (hit.point - Camera.main.transform.position).magnitude;
                firstPin.transform.localScale = myVector * distance * 2;
                //Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.yellow);
                //Debug.Log("Did Hit");

            }
            if (Physics.Raycast(secondPin.transform.position, secondPin.transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
            {
                /*secondPin.transform.position = hit.point;*/
                /*                var distance = (hit.transform.position - secondPin.transform.position).magnitude;
                                secondPin.transform.localScale = Vector3.one * distance;*/
                var distance = (hit.point - Camera.main.transform.position).magnitude;
                secondPin.transform.localScale = myVector * distance * 2;
                //Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.yellow);
                //Debug.Log("Did Hit");
            }


        }

        void IMixedRealityPointerHandler.OnPointerDown(MixedRealityPointerEventData eventData)
        {
            Debug.Log("1");
        }
    
        void IMixedRealityPointerHandler.OnPointerDragged(MixedRealityPointerEventData eventData)
        {
/*            var result = eventData.Pointer.Result;
            var spawnPosition = result.Details.Point;
            var spawnRotation = Quaternion.LookRotation(result.Details.Normal);
            firstPin.transform.position = spawnPosition;
            firstPin.transform.rotation = spawnRotation;*/
            Debug.Log("2");
        }

        void IMixedRealityPointerHandler.OnPointerUp(MixedRealityPointerEventData eventData)
        {

            Debug.Log("3");
        }

        void IMixedRealityPointerHandler.OnPointerClicked(MixedRealityPointerEventData eventData)
        {
            Debug.Log("4");
            GameObject.Find("first").transform.position = eventData.Pointer.Result.Details.Point;            
        }

        public void alignFirst()
        {
            int layerMask = 1 << 8;

            // This would cast rays only against colliders in layer 8.
            // But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
            layerMask = ~layerMask;

            RaycastHit hit;

            if (Physics.Raycast(firstPin.transform.position, firstPin.transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
            {               
                firstPin.transform.position = hit.point;
            }
        }

        public void alignSecond()
        {
            int layerMask = 1 << 8;

            // This would cast rays only against colliders in layer 8.
            // But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
            layerMask = ~layerMask;

            RaycastHit hit;

            if (Physics.Raycast(secondPin.transform.position, secondPin.transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
            {
                secondPin.transform.position = hit.point;
            }
        }


    }

}
