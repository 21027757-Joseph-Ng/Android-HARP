using System.Collections.Generic;	
using UnityEngine;	
using Newtonsoft.Json;	
namespace Excel.Configs
{
public class DeviceFuncMatchInfos
{
	private static List<DeviceFuncMatchInfo> info;
	public static List<DeviceFuncMatchInfo> GetInfos()
	{
		if (info == null)
		{
			info = Newtonsoft.Json.JsonConvert.DeserializeObject<List<DeviceFuncMatchInfo>>(Resources.Load<TextAsset>("Configs/DeviceFuncMatchInfo").ToString());
		}
		return info;
	}
}

[System.Serializable]
public class DeviceFuncMatchInfo
{
	/// 编号 
	public int Id;
	/// 功能名 
	public string FuncName;
	/// 设备Model名 
	public string DeviceModels;
	/// 系统版本 
	public string MinOSVersion;
	/// 是否需要相机 
	public int UseCamera;
}
}
