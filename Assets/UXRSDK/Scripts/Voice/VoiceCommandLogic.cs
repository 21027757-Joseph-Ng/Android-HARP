using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoiceCommandLogic : MonoSingleton<VoiceCommandLogic>
{
    AndroidJavaObject jo;
    private string m_ObjName;

    protected override void OnSingletonInit()
    {
        base.OnSingletonInit();
        m_ObjName = this.gameObject.name;
        Init();
    }

    /// <summary>
    /// 初始化
    /// </summary>
    private void Init()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            jo = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
            OverrideSysCommand();
            QuitCommand();
        }
    }

    private void QuitCommand()
    {
        AddInstrucEntityZH("退出应用", "tui chu ying yong", true, true, true, m_ObjName, "QuitApp", "退出应用");
    }

    private void QuitApp()
    {
        Application.Quit();
    }

    #region 覆盖系统指令

    /// <summary>
    /// 覆盖系统指令
    /// </summary>
    private void OverrideSysCommand()
    {
        AddInstrucEntityZH("显示帮助", "xian shi bang zhu", true, true, true, m_ObjName, "ShowHelpCallback", "显示帮助");
        AddInstrucEntity(1, "show help", true, true, true, m_ObjName, "ShowHelpCallback", "show help");

        AddInstrucEntityZH("上一个", "shang yi ge", true, true, true, m_ObjName, "DoNextCallback", "上一个");
        AddInstrucEntityZH("下一个", "xia yi ge", true, true, true, m_ObjName, "DoLastCallback", "下一个");
    }

    public void ShowHelpCallback(string content)
    {


    }

    public void DoNextCallback(string content)
    {

    }

    public void DoLastCallback(string content)
    {

    }
    #endregion

    #region 添加指令

    #region 单条指令
    /// <summary>
    /// 添加中文指令
    /// </summary>
    /// <param name="name"></param>
    /// <param name="pinyin"></param>
    /// <param name="showTips"></param>
    /// <param name="ignoreHelp"></param>
    /// <param name="ignoreToast"></param>
    /// <param name="gameobj"></param>
    /// <param name="unitycallbackfunc"></param>
    /// <param name="tmp"></param>
    public void AddInstrucEntityZH(string name, string pinyin, bool showTips, bool ignoreHelp, bool ignoreToast, string gameobj, string unitycallbackfunc, string tmp)
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            jo.Call("addInstructZH", name, pinyin, showTips, ignoreHelp, ignoreToast, gameobj, unitycallbackfunc, tmp);
        }
    }

    /// <summary>
    /// 添加中文指令
    /// </summary>
    /// <param name="name"></param>
    /// <param name="pinyin"></param>
    /// <param name="gameobj"></param>
    /// <param name="unitycallbackfunc"></param>
    /// <param name="tmp"></param>
    public void AddInstrucEntityZH(string name, string pinyin, string gameobj, string unitycallbackfunc, string tmp)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("addInstructZH", name, pinyin, gameobj, unitycallbackfunc, tmp);
    }

    /// <summary>
    /// 添加其他语言指令
    /// </summary>
    /// <param name="languageEnum">0 - zh, 1 - en</param>
    /// <param name="name"></param>
    /// <param name="showTips"></param>
    /// <param name="ignoreHelp"></param>
    /// <param name="ignoreToast"></param>
    /// <param name="gameobj"></param>
    /// <param name="unitycallbackfunc"></param>
    /// <param name="tmp"></param>
    public void AddInstrucEntity(int languageEnum, string name, bool showTips, bool ignoreHelp, bool ignoreToast, string gameobj, string unitycallbackfunc, string tmp)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("addInstruct", languageEnum, name, showTips, ignoreHelp, ignoreToast, gameobj, unitycallbackfunc, tmp);
    }

    /// <summary>
    /// 添加其他语言指令
    /// </summary>
    /// <param name="languageEnum">0 - zh, 1 - en</param>
    /// <param name="name"></param>
    /// <param name="gameobj"></param>
    /// <param name="unitycallbackfunc"></param>
    /// <param name="tmp"></param>
    public void AddInstrucEntity(int languageEnum, string name, string gameobj, string unitycallbackfunc, string tmp)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("addInstruct", languageEnum, name, gameobj, unitycallbackfunc, tmp);
    }
    #endregion

    #region 多条指令

    /// <summary>
    /// 中文多条指令
    /// </summary>
    /// <param name="prefix"></param>
    /// <param name="subfix"></param>
    /// <param name="helpContent"></param>
    /// <param name="startNo"></param>
    /// <param name="endNo"></param>
    /// <param name="gameobj"></param>
    /// <param name="InstructListCallback"></param>
    //eg, AddInstrucListZH("打开第", "个", “打开第x个”,1,5, m_ObjName,"InstructListCallback");
    public void AddInstrucListZH(string prefix, string subfix, string helpContent, int startNo, int endNo, string gameobj, string InstructListCallback)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("addInstructListZH", prefix, subfix, helpContent, startNo, endNo, gameobj, InstructListCallback);
    }

    /// <summary>
    /// 其他语言多条指令
    /// </summary>
    /// <param name="languageEnum"></param>
    /// <param name="prefix"></param>
    /// <param name="subfix"></param>
    /// <param name="helpContent"></param>
    /// <param name="startNo"></param>
    /// <param name="endNo"></param>
    /// <param name="gameobj"></param>
    /// <param name="InstructListCallback"></param>
    //eg, AddInstrucList(0,"打开第", "个", “打开第x个”,1,5, m_ObjName,"InstructListCallback");
    public void AddInstrucList(int languageEnum, string prefix, string subfix, string helpContent, int startNo, int endNo, string gameobj, string InstructListCallback)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("addInstructList", languageEnum, prefix, subfix, helpContent, startNo, endNo, gameobj, InstructListCallback);
    }

    /// <summary>
    /// 多条指令注册的回调 参照
    /// </summary>
    /// <param name="ekey"></param>
    public void InstructListCallback(string ekey)
    {
        string[] keyArray = ekey.Split('-');
        int index = int.Parse(keyArray[1]);
        Debug.Log("-UXR- unityInstructListFun: " + keyArray[0] + ", index:" + index);
    }

    #endregion

    #endregion

    #region 删除指令

    /// <summary>
    /// 删除中文指令
    /// </summary>
    /// <param name="name"></param>
    public void RemoveInstructZH(string name)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("removeInstructZH", name);
    }

    /// <summary>
    /// 删除其他语言指令
    /// </summary>
    /// <param name="languageEnum">0 - zh, 1 - en</param>
    /// <param name="name"></param>
    public void RemoveInstruct(int languageEnum, string name)
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("removeInstruct", languageEnum, name);
    }

    /// <summary>
    /// 清空用户指令
    /// </summary>
    public void ClearUserInstruct()
    {
        if (Application.platform == RuntimePlatform.Android)
            jo.Call("clearUserInstruct");
    }

    #endregion
}
