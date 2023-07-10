
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Excel.Configs;

/// <summary>
/// 功能设备匹配工具类
/// </summary>
public class FuncDeviceMatch
{
    public enum FuncEnum
    {
        HandTracking,
        VoiceRecog,
        CameraFunc
    }

    public static bool Check(string deviceModel, string funcName)
    {
        bool valid = false;
        List<DeviceFuncMatchInfo> deviceInfos = DeviceFuncMatchInfos.GetInfos();
        DeviceFuncMatchInfo info = deviceInfos.Where(item =>
        {
            return item.FuncName == funcName && item.DeviceModels.Contains(deviceModel);
        }).FirstOrDefault();
        if (info != null && string.IsNullOrEmpty(info.MinOSVersion))
        {
            if (info.UseCamera == 1)
            {
                if (WebCamTexture.devices.Length > 0)
                {
                    valid = true;
                }
            }
            else
            {
                valid = true;
            }
        }
        else
        {
            Debug.Log(string.Format("{0}:功能不支持,设备模型:{1}", funcName, deviceModel));
        }
        return valid;
    }

    public static bool Check(string deviceModel, string funcName, string osVersion)
    {
        bool valid = false;
        List<DeviceFuncMatchInfo> deviceInfos = DeviceFuncMatchInfos.GetInfos();
        DeviceFuncMatchInfo info = deviceInfos.Where(item =>
        {
            return item.FuncName == funcName && item.DeviceModels.Contains(deviceModel) && osVersion.CompareTo(item.MinOSVersion) >= 0;
        }).FirstOrDefault();
        if (info != null)
        {
            if (info.UseCamera == 1)
            {
                if (WebCamTexture.devices.Length > 0)
                {
                    valid = true;
                }
            }
            else
            {
                valid = true;
            }
        }
        else
        {
            Debug.Log(string.Format("{0}:功能不支持,设备模型:{1},最低系统版本:{2}", funcName, deviceModel, osVersion));
        }
        return valid;
    }

    public static bool CheckHandTrackingFunc()
    {
        string osVersion = GetOSVersion(SystemInfo.operatingSystem);
        Debug.Log("onVersion:" + osVersion);
        return Check(SystemInfo.deviceModel, FuncEnum.HandTracking.ToString(), osVersion);
    }

    public static string GetOSVersion(string OSVersion)
    {
        int index = OSVersion.LastIndexOf('/');
        string osVersion = OSVersion.Substring(index + 1);
        osVersion = osVersion.Remove(osVersion.Length - 1);
        return osVersion;
    }

    public static bool CheckVoiceRegFunc()
    {
        return Check(SystemInfo.deviceModel, FuncEnum.VoiceRecog.ToString());
    }

    public static bool CheckCameraFunc()
    {
        return Check(SystemInfo.deviceModel, FuncEnum.CameraFunc.ToString());
    }


    public static bool CheckFunc(FuncEnum func)
    {
        switch (func)
        {
            case FuncEnum.HandTracking:
                return CheckHandTrackingFunc();
            case FuncEnum.CameraFunc:
                return CheckCameraFunc();
            case FuncEnum.VoiceRecog:
                return CheckVoiceRegFunc();
            default:
                return false;
        }
    }

}
