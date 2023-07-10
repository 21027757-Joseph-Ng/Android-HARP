using UnityEngine;
using Pathfinding.Serialization.JsonFx;

public class RKGesType 
{
   

	public enum GestureType
	{
		None = -1,
		CloseHand = 0,
		OpenHand = 5,
		ClosedPinch = 10,
		OpenPinch = 11
	}


	public enum GesTrackState
	{
		DETECTING = 0, //未识别到手势,处于检测中
		INIT = 1,      //刚刚手势识别到的第一帧
		TRACKING = 2,  //处于跟踪中
		LOST = 3,      //丢失跟踪
		UNKNOWN = 4,   //未知状态，一般为算法未初始化或其他异常
	}


	public enum GestureAction
	{
		Normal = 0, //其他手势
		Click = 1,  //从手张开到捏合，表示点击事件		
	}

}
