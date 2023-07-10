using System.Runtime.InteropServices;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.Management;
using UnityEditor.XR.Management;

[InitializeOnLoad]
public class UXREnvFix : EditorWindow
{
    private const string ignorePrefix = "UXREnvFix";
    private static FixItem[] fixItems;
    private static UXREnvFix window;
    private Vector2 scrollPosition;
    private static string cardboardVersion = "1.14.0";
    private static string minUnityVersion = "2019.4.25";
    private static AndroidSdkVersions targetMinAndroidSdk = AndroidSdkVersions.AndroidApiLevel25;

    static UXREnvFix()
    {
        EditorApplication.update -= OnUpdate;
        EditorApplication.update += OnUpdate;
    }

    private static void OnUpdate()
    {
        bool show = false;

        if (fixItems == null) { RegisterItems(); }
        foreach (var item in fixItems)
        {
            if (!item.IsIgnored() && !item.IsValid() && item.Level > MessageType.Warning && item.IsAutoPop())
            {
                show = true;
            }
        }

        if (show)
        {
            ShowWindow();
        }

        EditorApplication.update -= OnUpdate;
    }

    private static void RegisterItems()
    {
        fixItems = new FixItem[]
        {
            new CheckUnityMinVersion(MessageType.Error), 
            #if UNITY_2020_3_OR_NEWER
                new CheckCardboardPackage(MessageType.Error),
            #endif 
            new CkeckMTRendering(MessageType.Error),
            new CkeckAndroidGraphicsAPI(MessageType.Error),
            new CkeckAndroidOrientation(MessageType.Warning),
            new CkeckColorSpace(MessageType.Warning),
            new CheckAndroidMinSdk(MessageType.Error),
            //new CkeckAndroidPermission(MessageType.Warning),
        };
    }

    [MenuItem("UXR/Env/Project Environment Fix", false)]
    public static void ShowWindow()
    {
        RegisterItems();
        window = GetWindow<UXREnvFix>(true);
        window.minSize = new Vector2(320, 300);
        window.maxSize = new Vector2(320, 800);
        window.titleContent = new GUIContent("UXRSDK | Environment Fix");
    }

    //[MenuItem("UXR/Env/Delete Ignore", false)]
    public static void DeleteIgonre()
    {
        foreach (var item in fixItems)
        {
            item.DeleteIgonre();
        }
    }

    public void OnGUI()
    {
        string resourcePath = GetResourcePath();
        Texture2D logo = AssetDatabase.LoadAssetAtPath<Texture2D>(resourcePath + "RokidIcon.png");
        Rect rect = GUILayoutUtility.GetRect(position.width, 80, GUI.skin.box);
        GUI.DrawTexture(rect, logo, ScaleMode.ScaleToFit);

        string aboutText = "This window provides tips to help fix common issues with the UXRSDK and your project.";
        EditorGUILayout.LabelField(aboutText, EditorStyles.textArea);

        int ignoredCount = 0;
        int fixableCount = 0;
        int invalidNotIgnored = 0;

        for (int i = 0; i < fixItems.Length; i++)
        {
            FixItem item = fixItems[i];

            bool ignored = item.IsIgnored();
            bool valid = item.IsValid();
            bool fixable = item.IsFixable();



            if (!valid && !ignored && fixable)
            {
                fixableCount++;
            }

            if (!valid && !ignored)
            {
                invalidNotIgnored++;
            }

            if (ignored)
            {
                ignoredCount++;
            }
        }

        Rect issuesRect = EditorGUILayout.GetControlRect();
        GUI.Box(new Rect(issuesRect.x - 4, issuesRect.y, issuesRect.width + 8, issuesRect.height), "Tips", EditorStyles.toolbarButton);

        if (invalidNotIgnored > 0)
        {
            scrollPosition = GUILayout.BeginScrollView(scrollPosition);
            {
                for (int i = 0; i < fixItems.Length; i++)
                {
                    FixItem item = fixItems[i];

                    if (!item.IsIgnored() && !item.IsValid())
                    {
                        invalidNotIgnored++;

                        GUILayout.BeginVertical("box");
                        {
                            item.DrawGUI();

                            EditorGUILayout.BeginHorizontal();
                            {
                                // Aligns buttons to the right
                                GUILayout.FlexibleSpace();

                                if (item.IsFixable())
                                {
                                    if (GUILayout.Button("Fix"))
                                        item.Fix();
                                }

                                //if (GUILayout.Button("Ignore"))
                                //    check.Ignore();
                            }
                            EditorGUILayout.EndHorizontal();
                        }
                        GUILayout.EndVertical();
                    }
                }
            }
            GUILayout.EndScrollView();
        }

        GUILayout.FlexibleSpace();

        if (invalidNotIgnored == 0)
        {
            GUILayout.BeginHorizontal();
            {
                GUILayout.FlexibleSpace();

                GUILayout.BeginVertical();
                {
                    GUILayout.Label("No issues found");

                    if (GUILayout.Button("Close Window"))
                        Close();
                }
                GUILayout.EndVertical();

                GUILayout.FlexibleSpace();
            }
            GUILayout.EndHorizontal();

            GUILayout.FlexibleSpace();
        }

        EditorGUILayout.BeginHorizontal("box");
        {
            if (fixableCount > 0)
            {
                if (GUILayout.Button("Accept All"))
                {
                    if (EditorUtility.DisplayDialog("Accept All", "Are you sure?", "Yes, Accept All", "Cancel"))
                    {
                        for (int i = 0; i < fixItems.Length; i++)
                        {
                            FixItem item = fixItems[i];

                            if (!item.IsIgnored() &&
                                !item.IsValid())
                            {
                                if (item.IsFixable())
                                    item.Fix();
                            }
                        }
                    }
                }
            }

        }
        // Debug.Log("fixableCount:" + fixableCount);
        GUILayout.EndHorizontal();
    }

    private string GetResourcePath()
    {
        var ms = MonoScript.FromScriptableObject(this);
        var path = AssetDatabase.GetAssetPath(ms);
        path = Path.GetDirectoryName(path);
        return path + "\\Textures\\";
    }

    private abstract class FixItem
    {
        protected string key;
        protected MessageType level;

        public MessageType Level
        {
            get
            {
                return level;
            }
        }

        public FixItem(MessageType level)
        {
            this.level = level;
        }

        public void Ignore()
        {
            EditorPrefs.SetBool(ignorePrefix + key, true);
        }

        public bool IsIgnored()
        {
            return EditorPrefs.HasKey(ignorePrefix + key);
        }

        public void DeleteIgonre()
        {
            Debug.Log("DeleteIgnore" + ignorePrefix + key);
            EditorPrefs.DeleteKey(ignorePrefix + key);
        }

        public abstract bool IsValid();

        public abstract bool IsAutoPop();

        public abstract void DrawGUI();

        public abstract bool IsFixable();

        public abstract void Fix();

        protected void DrawContent(string title, string msg)
        {
            EditorGUILayout.HelpBox(title, level);
            EditorGUILayout.LabelField(msg, EditorStyles.textArea);
        }
    }

    private class CheckCardboardPackage : FixItem
    {
        private enum PackageStates
        {
            None,
            WaitingForList,
            Failed,
            Added,
        }

        UnityEditor.PackageManager.Requests.ListRequest request;
        PackageStates packageState = PackageStates.None;
        bool isvalid = true;
        bool initOnStart;
        bool hasLoader;

        public CheckCardboardPackage(MessageType level) : base(level)
        {
            key = this.GetType().Name;
            request = null;
            isvalid = true;
#if UNITY_2020_3_OR_NEWER
            EditorApplication.update -= CheckPackageUpdate;
            EditorApplication.update += CheckPackageUpdate;
#endif
        }

#if UNITY_2020_3_OR_NEWER
        void CheckPackageUpdate()
        {
            switch (packageState)
            {
                case PackageStates.None:
                    request = UnityEditor.PackageManager.Client.List(true, false);
                    packageState = PackageStates.WaitingForList;
                    break;

                case PackageStates.WaitingForList:
                    if (request.IsCompleted)
                    {
                        if (request.Error != null || request.Status == UnityEditor.PackageManager.StatusCode.Failure)
                        {
                            packageState = PackageStates.Failed;
                            break;
                        }

                        UnityEditor.PackageManager.PackageCollection col = request.Result;
                        foreach (var info in col)
                        {
                            if (info.name == "com.google.xr.cardboard" && info.version == cardboardVersion)
                            {
                                packageState = PackageStates.Added;

                                isvalid = true;

                                break;
                            }
                        }
                        if (packageState != PackageStates.Added) isvalid = false;
                    }
                    break;

                default:
                    break;
            }
        }

#endif

        public override bool IsValid()
        {
            return (isvalid && initOnStart && hasLoader);
        }

        public override void DrawGUI()
        {
            string message = @"You must upgrade Cardboard XR Plugin to version:" + cardboardVersion + @",
in dropdown list of Window> Package Manager >'+' Button >Add package from disk >Select the package.json file in the root directory of the local Cardboard XR Plugin .
Select XR Plug-in Management in the Project Settings window>Initialize XR on Startup checked>Cardboard XR Plugin Checked";
            DrawContent("Cardboard XR Plugin is not setup correctly", message);
        }

        public override bool IsFixable()
        {
            if (isvalid)
            {
                XRGeneralSettings sets = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildTargetGroup.Android);

                if (sets != null)
                {
                    initOnStart = sets.InitManagerOnStart;

                    XRManagerSettings plugins = sets.AssignedSettings;
                    var loaders = sets.Manager.activeLoaders;

                    hasLoader = false;

                    for (int i = 0; i < loaders.Count; i++)
                    {
                        if (loaders[i].GetType() == typeof(Google.XR.Cardboard.XRLoader))
                            hasLoader = true;
                        break;
                    }
                    if (!hasLoader || !initOnStart) return true;
                }
            }
            return false;
        }

        public override void Fix()
        {
            var sets = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildTargetGroup.Android);
            bool initOnStart = sets.InitManagerOnStart;

            if (!initOnStart) sets.InitManagerOnStart = true;

            XRManagerSettings plugins = sets.AssignedSettings;
            var loaders = sets.Manager.activeLoaders;
            bool hasLoader = false;

            for (int i = 0; i < loaders.Count; i++)
            {
                if (loaders[i].GetType() == typeof(Google.XR.Cardboard.XRLoader))
                    hasLoader = true;
                break;
            }

            if (!hasLoader)
            {
                var xrLoader = new Google.XR.Cardboard.XRLoader();
                plugins.TryAddLoader(xrLoader);
            }
        }

        public override bool IsAutoPop()
        {
            return false;
        }
    }

    private class CkeckAndroidGraphicsAPI : FixItem
    {
        public CkeckAndroidGraphicsAPI(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                var graphics = PlayerSettings.GetGraphicsAPIs(BuildTarget.Android);
                if (graphics != null && graphics.Length >= 1 &&
                    graphics[0] == UnityEngine.Rendering.GraphicsDeviceType.OpenGLES2 || graphics[0] == UnityEngine.Rendering.GraphicsDeviceType.OpenGLES3)
                {
                    return true;
                }
                return false;
            }
            else
            {
                return false;
            }
        }

        public override void DrawGUI()
        {
            string message = @"In order to render correct on mobile devices, the graphicsAPIs should be set to OpenGLES. 
in dropdown list of Player Settings > Other Settings > Graphics APIs , choose 'OpenGLES2 or OpenGLES3'.";
            DrawContent("GraphicsAPIs is not OpenGLES", message);
        }

        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                PlayerSettings.SetUseDefaultGraphicsAPIs(BuildTarget.Android, false);
                PlayerSettings.SetGraphicsAPIs(BuildTarget.Android, new GraphicsDeviceType[1] { GraphicsDeviceType.OpenGLES2 });
            }
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    private class CkeckMTRendering : FixItem
    {
        public CkeckMTRendering(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                return !PlayerSettings.GetMobileMTRendering(BuildTargetGroup.Android);
            }
            else
            {
                return false;
            }
        }

        public override void DrawGUI()
        {
            string message = @"In order to run correct on mobile devices, the RenderingThreadingMode should be set. 
in dropdown list of Player Settings > Other Settings > Multithreaded Rendering, close toggle.";
            DrawContent("Multithreaded Rendering not close", message);
        }

        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                PlayerSettings.SetMobileMTRendering(BuildTargetGroup.Android, false);
            }
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    private class CkeckAndroidOrientation : FixItem
    {
        public CkeckAndroidOrientation(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            return PlayerSettings.defaultInterfaceOrientation == UIOrientation.LandscapeLeft;
        }

        public override void DrawGUI()
        {
            string message = @"In order to display correct on mobile devices, the orientation should be set to LandscapeLeft. 
in dropdown list of Player Settings > Resolution and Presentation > Default Orientation, choose 'LandscapeLeft'.";
            DrawContent("Orientation is not portrait", message);
        }

        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                PlayerSettings.defaultInterfaceOrientation = UIOrientation.LandscapeLeft;
            }
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    private class CkeckColorSpace : FixItem
    {
        public CkeckColorSpace(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            return PlayerSettings.colorSpace == ColorSpace.Gamma;
        }

        public override void DrawGUI()
        {
            string message = @"In order to display correct on mobile devices, the colorSpace should be set to gamma. 
in dropdown list of Player Settings > Other Settings > Color Space, choose 'Gamma'.";
            DrawContent("ColorSpace is not Linear", message);
        }

        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                PlayerSettings.colorSpace = ColorSpace.Gamma;
            }
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    //Android Min Sdk 版本的检查
    private class CheckAndroidMinSdk : FixItem
    {
        public CheckAndroidMinSdk(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            return PlayerSettings.Android.minSdkVersion == targetMinAndroidSdk;
        }

        public override void DrawGUI()
        {
            string message = @"In order to run correct on mobile devices, . 
in dropdown list of Player Settings > Other Settings > Identification > Min Android SDK Level, choose '25'.";
            DrawContent("Android Min Sdk Version is false", message);
        }

        /// <summary>
        /// 是否能够被修复
        /// </summary>
        /// <returns></returns>
        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            PlayerSettings.Android.minSdkVersion = targetMinAndroidSdk;
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    private class CkeckAndroidPermission : FixItem
    {
        public CkeckAndroidPermission(MessageType level) : base(level)
        {
            key = this.GetType().Name;
        }

        public override bool IsValid()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                return PlayerSettings.Android.forceInternetPermission;
            }
            else
            {
                return false;
            }
        }

        public override void DrawGUI()
        {
            string message = @"In order to run correct on mobile devices, the internet access premission should be set. 
in dropdown list of Player Settings > Other Settings > Internet Access, choose 'Require'.";
            DrawContent("internet access permission not available", message);
        }

        public override bool IsFixable()
        {
            return true;
        }

        public override void Fix()
        {
            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.Android)
            {
                PlayerSettings.Android.forceInternetPermission = true;
            }
        }

        public override bool IsAutoPop()
        {
            return true;
        }
    }

    //添加Unity最低版本号的检查
    private class CheckUnityMinVersion : FixItem
    {
        string unityVersion;//2020.3.30

        public CheckUnityMinVersion(MessageType level) : base(level)
        {
            key = this.GetType().Name;
            unityVersion = Application.unityVersion;
        }

        public override void DrawGUI()
        {
            string message = @"The minimum Unity version required is 2019.4.25";
            DrawContent("Unity version not valid ", message);
        }

        public override void Fix()
        {

        }

        public override bool IsAutoPop()
        {
            return true;
        }

        public override bool IsFixable()
        {
            return unityVersion.CompareTo(minUnityVersion) == 1;
        }

        public override bool IsValid()
        {
            return unityVersion.CompareTo(minUnityVersion) == 1;
        }
    }
}
