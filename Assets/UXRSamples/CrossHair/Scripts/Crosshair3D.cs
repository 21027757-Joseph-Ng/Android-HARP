using UnityEngine;
using System.Collections;				// required for Coroutines

public class Crosshair3D : MonoBehaviour
{
	public float offsetFromObjects = 0.1f;
	public GameObject cameraController = null;
	
	private Transform thisTransform = null;
	private Material crosshairMaterial = null;

	public Texture2D normal = null;
	public Texture2D gaze = null;

    public static Vector3 resultEuler;

    // Initialize the crosshair
    void Awake()
	{
		cameraController = GameObject.Find("Main Camera"); 
		
		thisTransform = transform;
		
		if (cameraController == null)
		{
			Debug.LogError("-xr- ERROR: missing camera controller object on " + name);
			enabled = false;
			return;
		}
		// clone the crosshair material
		crosshairMaterial = GetComponent<Renderer>().material;
	}

	// Cleans up the cloned material
	void OnDestroy()
	{
		if (crosshairMaterial != null)
		{
			Destroy(crosshairMaterial);
		}
	}

	// Updates the position of the crosshair.
	void LateUpdate()
	{

		Ray ray;
		RaycastHit hit;
		
		if (true)
		{
			// get the camera forward vector and position
			Vector3 cameraPosition = cameraController.transform.position;
			Vector3 cameraForward = cameraController.transform.forward;
			Quaternion cameraRot = cameraController.transform.rotation;
			
			//Debug.Log("-xr- crosshiar3D: cam pos rot : " + cameraPosition +","+cameraForward);
			
			GetComponent<Renderer>().enabled = true;

			ray = new Ray(cameraPosition, cameraForward);

            //计算朝向这个正前方时的物体四元数值
            //Quaternion lookAtRot = Quaternion.LookRotation(cameraForward);

            //把四元数值转换成角度
            //Vector3 resultEuler = lookAtRot.eulerAngles;
             resultEuler = cameraRot.eulerAngles;


            //Debug.Log("-xr- crosshiar3D: lookAtRot resultQuat : " + lookAtRot);
            //Debug.Log("-ar- crosshiar3D: lookAtRot resultEuler : " + resultEuler+ ",eulerY: "+ resultEuler.y);

            thisTransform.position = cameraPosition + (cameraForward * 10);
			//Debug.Log("-xr- crosshiar3D: position : " + thisTransform.position);
			
            if ( Physics.Raycast(ray, out hit))
			{
				//thisTransform.position = hit.point + (-cameraForward * offsetFromObjects);
				thisTransform.forward = -cameraForward;
				crosshairMaterial.color = Color.green;
				 
				Debug.Log("-xr- Crosshiar3D: hit point z: " + hit.point.z);
				if(hit.point.z < 14.9)
					crosshairMaterial.mainTexture = gaze;
				else
					crosshairMaterial.mainTexture = normal;

			}
		}
	}
}
