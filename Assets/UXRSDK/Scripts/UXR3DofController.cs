using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UXR3DofController : MonoBehaviour
{
    [SerializeField]
    private GameObject imuObject;

    Quaternion transformQ = Quaternion.identity;

    // Start is called before the first frame update
    void Start()
    {
        caculateTransform();
    }

    // Update is called once per frame
    void Update()
    {
        Quaternion roatationCam = transformQ * getGlassRotationVector();
        this.transform.rotation = roatationCam;

        if (Application.platform == RuntimePlatform.Android
            && (Input.GetKeyDown(KeyCode.JoystickButton0) || Input.GetKeyDown((KeyCode.Return)))) //yidao dpad center
        {
            Debug.Log("-UXR- Input KEYCODE_DPAD_CENTER");
            caculateTransform();
        }
    }

    public void caculateTransform()
    {
        caculateTransform(Quaternion.identity);
    }

    public void caculateTransform(Quaternion qt)
    {
        transformQ = qt * Quaternion.Inverse(getGlassRotationVector());
    }

    private Quaternion getGlassRotationVector()
    {
        return imuObject.transform.localRotation;
    }
}
