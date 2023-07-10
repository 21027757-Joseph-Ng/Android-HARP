using Microsoft.MixedReality.Toolkit.Examples.Demos;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

using static RKGesType;




public class HandGestures : MonoBehaviour
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
    float initialScaleZ = 1.0f, defaultDist = 22.0f;
    bool isinitialScaleZgot = false;
    long lastGesTimeStamp = 0;
    private Transform cube;
    public bool useUnityCamera;




    //Added stuff
    public GameObject checkListManager;
    public GameObject thematicList;
    public GameObject button1;
    public GameObject button2;
    private Transform GesturePos;
    public GameObject thematicButton;
    public Event test;
    private float nextUpdate = 0.0f;
    public float period = 1f;


    public float timeForHand = 0.0f;
    public float checkForHands = 3f;

    private bool checkButton = false;

    public bool checkHands = false;
    //

    /// <summary>
    /// 开启手势识别
    /// </summary>
    public bool openGes;

    void Awake()
    {
        m_MainCamera = Camera.main.GetComponent<Camera>();
        m_TargetTrans = m_TargetObj.transform;
        m_TargetRender = m_TargetTrans.GetComponent<Renderer>();

        cube = GameObject.Find("HandMenu_Small").transform;
        GesturePos = m_TargetObj.transform;
    }

    void Update()
    {
        if (!openGes)
        {
            cube.gameObject.SetActive(false);
            return;
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
            // Debug.Log("-uxr- Update:  ignore old gesture:  " + m_Arg.timeStamp);
            return;// no new gesture result
        }

        lastGesTimeStamp = m_Arg.timeStamp;

        if ((!isinitialScaleZgot) && (m_Arg.refScaleZ > 0))
        {
            initialScaleZ = m_Arg.refScaleZ;
            isinitialScaleZgot = true;
            Debug.Log("-uxr- : initialScaleZ  " + initialScaleZ);
        }

        if (m_Arg.trackState == 2)
        {
            UpdatePosHandGesture(m_Arg.refScaleZ);
        }

        if (m_Arg.GesType == (int)GestureType.CloseHand)
        {
            if (cube.gameObject.activeSelf)
            {
               UpdatePos(m_Arg.refScaleZ);
            }
            else
            {
                cube.gameObject.SetActive(true);
            }
            
        }

        //if (m_Arg.GesType == (int)GestureType.OpenHand)
        //{
               
        //}


        //if (m_Arg.gestureAction == (int)GestureAction.Click)  // click事件:1(click)，0(非click)
        //{
        //    Debug.Log("-uxr- Update:  click  ");
        //    UpdateRot();
        //}

        if (m_Arg.trackState == 0)
        {
            cube.gameObject.SetActive(false);
        }

        //if ((m_Arg.GesType == (int)GestureType.ClosedPinch) && RayCaster.lastHit.Equals(button1))
        //{
        //    SceneManager.LoadScene("MainMenu");

        //}

        //if ((m_Arg.GesType == (int)GestureType.ClosedPinch) && RayCaster.lastHit.Equals(button2))
        //{
        //      if(checkButton == false)
        //    {
        //        checkListManager.SetActive(true);
        //        checkButton = true;
        //    }
        //    else
        //    {
        //        checkListManager.SetActive(false);
        //        checkButton = false;
        //    }
        //}

        //if ((m_Arg.GesType == (int)GestureType.ClosedPinch) && RayCaster.lastHit.Equals(thematicButton))
        //{
        //    // thematicList.SetActive(true);
        //    IPointerClickHandler clickHandler = RayCaster.lastHit.gameObject.GetComponent<IPointerClickHandler>();
        //    PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        //    clickHandler.OnPointerClick(pointerEventData);
        //}

        // if ((m_Arg.GesType == (int)GestureType.ClosedPinch) && (RayCaster.lastHit != null) )
        // {
            // thematicList.SetActive(true);
            
            //IPointerClickHandler clickHandler = RayCaster.lastHit.gameObject.GetComponent<IPointerClickHandler>();
            //PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
            //clickHandler.OnPointerClick(pointerEventData);
            //Debug.Log("Clicked On: " + RayCaster.lastHit);
        // }

        float handTime = Time.time;

        if (Time.time > nextUpdate)
        {
            // Debug.Log(Time.time + ">=" + nextUpdate);
            nextUpdate = Time.time + period;
            // Call your function
            ClickedOnScript();
        }

        if (handTime > timeForHand)
        {
            // Debug.Log(handTime + ">=" + timeForHand + "test");
            timeForHand = handTime + checkForHands;
            // Call your function
            CheckHandExist();
        }

        UpdateHandType(m_Arg.handType);

        ChangeColor();
    }

    /// <summary>
    /// 更新位置
    /// </summary>
    private void UpdatePos(float scaleZ)
    {
        Ray handRay = m_MainCamera.ViewportPointToRay(new Vector3(m_Arg.normPosX, m_Arg.normPosY));
        m_TargetTrans.position = handRay.GetPoint(10.0f);

        if (scaleZ > 0)
        {
            //float dist = defaultDist * initialScaleZ / scaleZ;
            float dist = 12f;
            cube.position = handRay.GetPoint(dist);
        }

        //Debug.Log("-uxr- onGes:pos  " + m_TargetTrans.position);
    }

    // Hand Gesture Position
    private void UpdatePosHandGesture(float scaleZ)
    {
        Ray handRay = m_MainCamera.ViewportPointToRay(new Vector3(m_Arg.normPosX, m_Arg.normPosY));
        m_TargetTrans.position = handRay.GetPoint(10.0f);

        if (scaleZ > 0)
        {
            float dist = defaultDist * initialScaleZ / scaleZ;
            GesturePos.position = handRay.GetPoint(dist - 8);
        }

        //Debug.Log("-uxr- onGes:pos  " + m_TargetTrans.position);
    }

    /// <summary>
    /// 更新角度
    /// </summary>
    private void UpdateRot()
    {
        cube.transform.Rotate(new Vector3(0, 30, 0));
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

    private void ClickedOnScript()
    {
        if ((m_Arg.GesType == (int)GestureType.ClosedPinch) && (RayCaster.lastHit != null) && (checkHands == false))
        {
            IPointerClickHandler clickHandler = RayCaster.lastHit.gameObject.GetComponent<IPointerClickHandler>();
            PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
            clickHandler.OnPointerClick(pointerEventData);
            Debug.Log("Clicked On: " + RayCaster.lastHit);
            checkHands = true;
        }

        else if (m_Arg.GesType != (int)GestureType.ClosedPinch && (checkHands == true))
        {
            checkHands = false;
        }

    }

    private void CheckHandExist()
    {
        Debug.Log(m_Arg.handType);
        if (m_Arg.handType == 0)
        {
            cube.gameObject.SetActive(false);
        }

        else
        {
            cube.gameObject.SetActive(true);
        }
    }

}