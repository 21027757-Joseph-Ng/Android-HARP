using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RayCaster : MonoBehaviour
{
    public static GameObject lastHit;
    public GameObject testobject;

    // Update is called once per frame
    void Update()
    {
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out RaycastHit hitinfo, 20f))
        {
            lastHit = hitinfo.transform.gameObject;

            if (lastHit == testobject)
            {
                Debug.Log("Correct object");
            }
        }

    }
}
