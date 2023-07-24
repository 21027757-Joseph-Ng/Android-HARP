using UnityEngine;
using UnityEngine.UI;
using System;

using static RKGesType;



public class Measures : MonoBehaviour
{
    [SerializeField]
    private GameObject m_TargetObj;
    [SerializeField]
    private Text m_PosText;
    [SerializeField]
    private Text m_GesTypeText;
    [SerializeField]
    private Text m_HandTypeText;

    private Transform m_TargetTrans;
    private Renderer m_TargetRender;
    private Camera m_MainCamera;
    private RKGestureEvent m_Arg;
    float initialScaleZ = 1.0f, defaultDist = 0f;
    bool isinitialScaleZgot = false;
    long lastGesTimeStamp = 0;
    private Transform sphere1;
    private Transform sphere2;
    public bool useUnityCamera;

    /// <summary>
    /// 开启手势识别
    /// </summary>
    public bool openGes;

    void Awake()
    {
        m_MainCamera = Camera.main.GetComponent<Camera>();
        m_TargetTrans = m_TargetObj.transform;//the sphere that appear when u use gesture, so this is for something like coordination of it
        m_TargetRender = m_TargetTrans.GetComponent<Renderer>();

        sphere1 = GameObject.Find("FirstPin").transform;//get the position of game object cube which is used to control
        sphere2 = GameObject.Find("SecondPin").transform;
    }

    void Update()
    {
        if (!openGes)
        {
            sphere1.gameObject.SetActive(false);
            sphere2.gameObject.SetActive(false);
            return;
        }
        else
        {
            sphere1.gameObject.SetActive(true);
            sphere2.gameObject.SetActive(true);
        }
        if (useUnityCamera)
        {
            m_Arg = UXRGesCamera.s_Event;

        }
        else
        {
            m_Arg = UXRGesController.s_Event;
        }

        if (m_Arg == null || m_Arg.trackState != (int)GesTrackState.TRACKING) //TRACKING  手势处于跟踪中
        {
            return;
        }

        if (m_Arg.timeStamp == lastGesTimeStamp)
        {
            Debug.Log("-uxr- Update:  ignore old gesture:  " + m_Arg.timeStamp);
            return;// no new gesture result
        }

        lastGesTimeStamp = m_Arg.timeStamp;

        if ((!isinitialScaleZgot) && (m_Arg.refScaleZ > 0))
        {
            initialScaleZ = m_Arg.refScaleZ;
            isinitialScaleZgot = true;
            Debug.Log("-uxr- : initialScaleZ  " + initialScaleZ);
        }

        if (m_Arg.GesType == (int)GestureType.ClosedPinch)
        {
            UpdatePos1(m_Arg.refScaleZ);
        }

        if (m_Arg.GesType == (int)GestureType.CloseHand)
        {
            UpdatePos2(m_Arg.refScaleZ);
        }

        UpdateHandType(m_Arg.handType);

        ChangeColor();

        Debug.Log(Vector3.Distance(GameObject.Find("first").transform.position, GameObject.Find("second").transform.position));
    }

    /// <summary>
    /// 更新位置
    /// </summary>
    private void UpdatePos1(float scaleZ)
    {
        Ray handRay = m_MainCamera.ViewportPointToRay(new Vector3(m_Arg.normPosX, m_Arg.normPosY));
        m_TargetTrans.position = handRay.GetPoint(10.0f);

        if (scaleZ > 0)
        {
                float dist = defaultDist * initialScaleZ / scaleZ;
                sphere1.position = handRay.GetPoint(dist);
                Debug.Log("sphere1: " + sphere1.position);
                Debug.Log(dist);
        }
        //Debug.Log("-uxr- onGes:pos  " + m_TargetTrans.position);
    }

    private void UpdatePos2(float scaleZ)
    {
        Ray handRay = m_MainCamera.ViewportPointToRay(new Vector3(m_Arg.normPosX, m_Arg.normPosY));
        m_TargetTrans.position = handRay.GetPoint(10.0f);

        if (scaleZ > 0)
        {
            float dist = defaultDist * initialScaleZ / scaleZ;
            sphere2.position = handRay.GetPoint(dist);
            Debug.Log("sphere2: " + sphere2.position);
            Debug.Log(dist);
        }
        //Debug.Log("-uxr- onGes:pos  " + m_TargetTrans.position);
    }


    /// <summary>
    /// 更新显示手类型
    /// </summary>
    private void UpdateHandType(int type)
    {
        switch (type)
        {
            case 0:
                m_HandTypeText.text = "HandType: No Hand";
                break;
            case 1:
                m_HandTypeText.text = "HandType: Right Hand";
                break;
            case 2:
                m_HandTypeText.text = "HandType: Left Hand";
                break;
        }
    }

    /// <summary>
    /// 根据手势类型改变小球颜色
    /// </summary>
    private void ChangeColor()
    {
        switch (m_Arg.GesType)
        {
            case (int)GestureType.None:
                m_TargetObj.SetActive(false);
                break;
            case (int)GestureType.CloseHand:
                m_TargetObj.SetActive(true);
                m_TargetRender.material.color = Color.green;
                break;
            case (int)GestureType.OpenHand:
                m_TargetObj.SetActive(true);
                m_TargetRender.material.color = Color.blue;
                break;
            case (int)GestureType.ClosedPinch:
                m_TargetObj.SetActive(true);
                m_TargetRender.material.color = Color.black;
                break;
            case (int)GestureType.OpenPinch:
                m_TargetObj.SetActive(true);
                m_TargetRender.material.color = Color.white;
                break;
        }
    }
}