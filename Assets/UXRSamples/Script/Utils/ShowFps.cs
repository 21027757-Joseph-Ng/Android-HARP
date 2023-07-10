using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowFps : MonoBehaviour
{
    [SerializeField]
    private Text fpsText;

    public float fpsMeasuringDelta = 2.0f;

    private float m_timePassed;
    private int m_FrameCount = 0;
    private int m_FPS = 0;

    private void Awake()
    {
        fpsText = GetComponent<Text>();
    }

    private void Start()
    {
        m_timePassed = 0.0f;
    }

    private void Update()
    {
        m_FrameCount = m_FrameCount + 1;
        m_timePassed = m_timePassed + Time.deltaTime;

        if (m_timePassed > fpsMeasuringDelta)
        {
            m_FPS = (int)(m_FrameCount / m_timePassed);

            m_timePassed = 0.0f;
            m_FrameCount = 0;
        }
        fpsText.text = "Render FPS:" + m_FPS;
    }

}