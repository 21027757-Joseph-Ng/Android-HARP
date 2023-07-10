using System.Collections;
//using UnityEngine;

//get App info from Android
[System.Serializable]
public class RKGestureEvent
{
    public int GesType;
    public int handType;//0.no hand   1.right hand   2.left hand
    public float normPosX;
    public float normPosY;
    public int screenPosX;
    public int screenPosY;
    public float refScaleZ;
    public int gestureAction;
    public long timeStamp;
    public int trackState;
    public float[][] normPos21;

}
