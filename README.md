## Installation of Necessary Softwares/Toolkits/Packages/Dependencies/SDK

### Getting the required Assets
Git Clone / Pull or Download as Zip in the following GitHub Repository

### Installation of Window SDK
Install the Window SDK (Version 10.0.19041.0) needed for Hololens 2. Click [here](https://go.microsoft.com/fwlink/?linkid=2120843) to download if not find the references [here](https://developer.microsoft.com/en-us/windows/downloads/sdk-archive/)

### Installation of Unity Hub
Unity Hub is required to open or run any of the Unity Projects. You can install them by clicking [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe) if not visit the official website [here](https://unity3d.com/get-unity/download)

### Choose your appropriate Unity Version that you need.
For this case we're using **2020.3.33f1** where you can find all the archive [here](https://unity3d.com/get-unity/download/archive)

Modules needed for Unity 2020.3.33f1 to Develop in Hololens 2
- Universal Windows Platform Build Support
- Windows Build Support
- Visual Studio (VS Community 2022 / 2019)

![image](https://user-images.githubusercontent.com/25051402/201806064-b90d99e9-ae9a-4ba3-bff0-f3c956019f6e.png)
![image](https://user-images.githubusercontent.com/25051402/201806166-feb51ed6-af68-427a-b5cd-2b279643137e.png)
![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/New.png)

### Choose the Visual Studio you prefer to use
Tested with VS Community 2022 and VS Commmunity 2019. You can find these [here](https://visualstudio.microsoft.com/downloads/)

Go to Visual Studio Installer and Download the Necessary Workloads Stated Below

Under Desktop & Mobile Section
- Universal Windows Platform Development
- .NET Desktop Development
- Desktop Development with C++
![image](https://user-images.githubusercontent.com/25051402/201803875-bfa8e8e3-a7d1-469f-b146-a69d337741cd.png)

Under Gaming
- Game Development with Unity
- Game development with C++ 
![image](https://user-images.githubusercontent.com/25051402/201804092-12f338fd-ff86-4305-af80-c1b1605f9223.png)

### Rokid UXR SDK
- [UXR SDK Download](https://ota-g.rokidcdn.com/toB/Rokid_Glass/SDK/UXR_SDK/Unity/forDock/RokidUXR_Unity_ForDock_v1.6.2.zip)
  
---

## Problems faced when only using HARP in HoloLens
- Current limitations in our testing environment stem from the exclusive reliance on Hololens, no other alternative devices with other capability to use.

- Deployment of HARP, which is developed specifically for Hololens, on other devices is currently unfeasible as HARP is only created on Windows Operating system

## Objective of porting over HARP from Hololens to Rokid
- Expand our testing capabilities

- Explore the compatibility of HARP with various Android devices

- Optimize HARP for the different hardware in Rokid
 
---
## Architecture diagram
![Untitled Diagram drawio (4)](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/Screenshot%202023-10-18%20160700.png)

---
## Main Components of HARP

- User Interface
- Photon
- AR Frameworks
- Cloud Services
- Applications
- User Input

---
## Setting up the Working Environment from Downloaded Asset

### Opening Unity Project

1) Open Unity Hub
2) Open Project -> Select Downloaded Project

## Setting up the Working Environment from Scratch

### Creating the Project

1) Open Unity Hub
2) New Project -> 3D (Core)

## Installing and Importing Packages in Unity

Step 1: In a new project, choose Windows > Package Manager and select "+" > Add package from disk. Then [download](https://ota-g.rokidcdn.com/toB/Rokid_Glass/SDK/UXR_SDK/Unity/forDock/RokidUXR_Unity_ForDock_v1.6.2.zip) and unzip the package.json file under the RokidUXR_SDK_Unity_ForDock/sxrunitysdk-UXR_vdock directory, and import the Google Cardboard plug-in.

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image.png)

Step 2: Choose Unity > Assets > Import Package > Custom Package, select UXR_Dock_v.unitypackage in the UXR SDK, and import all resources.
 Tips:  The version number is in X.Y.Z format. (For exampe, 1.1.0).

 ![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/Step%202.1.png)
 ![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/Step2.2.png)

---
## Code walkthrough / explanation 

UploadToDrive.cs 
- Contain codes that allows connection to One drive using APIs, it detects what is checked/unchecked in the checkList and converts them into JSON format after that it is send into one drive & contain codes to allow the files to be saved locally

TodoClose.cs & OpenCheckList.cs
- The script that provides codes to open the checkList and to close the checkList

ScrollMainMenu.cs
- The script contains codes that provides the function for the user to scroll up and down in the main menu and select the applications in the main menu

VoiceMainMenu.cs
- The script contain codes that provides allows the user to use voice command to activate features like "going into checkList App" etc.

HandGestureMainMenu.cs
- The script contain codes that allows the user's hand gesture to be detected by Rokid, there is 3 different gesture that is being used, "Open palm" "Close palm" "Pinch" . Close palm will move the hand Menu around, Pinch is like a select Button. Open palm is for navigating using hand gestures.

RayCaster.cs
- The script contains a RayCast which is able to detect what the user's hand gesture is pointing at and provides the input for the HandGesture Script

SceneLoader.cs
- The script contain what scene is to be loaded when it is selected.

FaceDetect.cs 
- Contains code that opens up the Camera in the device, the photo data is send to the Face Detect API, the photo data will be processed and results will be given

ObjectDetect.cs
- Contains code that opens up the Camera in the device, the photo data is send to the Object Detect API, the photo data will be processed and results will be given

ClickedDocument.cs
- The script contains the code that links the document viewer in Rokid and it will open up the document viewer when the script is called

ClickedQRScanner.cs
- The script contains the code that links the QR scanner in Rokid and it will open up the QR scanner when the script is called, the QR code that has been scanned will be send back to the script and a google chrome will open using the QR code that has been scanned

### Switching Platform to Android

Choose Unity > File > Build Settings. Select Android and then Switch Platform. 

If not Downloaded, Download in Unity Editor and Restart the Project

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%202.png)

Choose Project Settings > Player > Resolution and Presentation.
- Set Default Orientation to Landscape Left;
- Disable Optimized Frame Pacing.

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%203.png)

Choose Project Settings > Player > Other Settings.
- Select OpenGLES3 or OpenGLES2 or both in Graphics APIs;
- Select IL2CPP in Scripting Backend;
- Select ARMv7 or ARM64 in Target Architectures depending on the target platform;
- Set Package Name.

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%204.png)

Choose Project Settings > Player > Publishing Settings. 
- Select Custom Base Gradle Template in Build;
- Select Custom Main Gradle Template in Build;
- Select Custom Main Manifest in Build;
- If you are using Unity 2020.1 or lower version of Unity, you also need to select the Custom Gradle 
  Properities Template
![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%205.png)

Choose Project Settings > XR Plug-in Management.
- Select Initialize XR on Startup;
- Select Cardboard XR Plugin under Plug-in projects.

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%206.png)

## Open Unity Project and modify it by following the steps below: 
![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%207.png)

1. Add the following in "repositories" under Assets/Plugins/Android/baseProjectTemplate.gradle (This needs to be added in two places of the file and should be added under the existing jcenter().):

 maven { url 'https://maven.rokid.com/repository/maven-public/' }

 ![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%209.png)

 2. Add the following in "dependencies" under the Assets/Plugins/Android/mainTemplate.gradle:

implementation 'com.android.support:appcompat-v7:28.0.0'
implementation 'com.android.support:support-v4:28.0.0'
implementation 'com.google.android.gms:play-services-vision:15.0.2'
implementation 'com.google.protobuf:protobuf-javalite:3.19.4'
implementation "org.jetbrains.kotlin:kotlin-stdlib-jdk7:1.3.71"
implementation 'com.rokid.ai.glass:instructsdk:1.7.2'

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%2010.png)

3. In the "activity" tag row under Assets/Plugins/Android/AndroidManifest.xml, modify android:name to com.rokid.uxrplugin.activity.UXRUnityActivity as follows:

   <activity android:name="com.rokid.uxrplugin.activity.UXRUnityActivity"              
          android:theme="@style/UnityThemeSelector">
          
Then declare the required permissions for the app in AndroidManifest.xml (For details, see the figure above). For example,

<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />     
<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE" />
<uses-permission android:name="android.permission.RECORD_AUDIO"/>

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%2012.png)
 
---
## Testing & Deploying

Choose File > Build Settings.
Import all the scenes in the sample. 
Select Build, or specify a device and select Build and Run.
The running results are shown as below. The Sample offers head control tracking, speech recognition, gesture recognition, and other functions.

![image](https://raw.githubusercontent.com/21047599-Tan-Yao-Rong/LtaAndroidHARP/main/image%20(1).png)

## To Access your Device in Rokid
- Install [glassmate](https://rokid.ai/support-center/)

## For more information on Rokid
- Information on Device: https://rokid.ai/faqs/
- Developer Documentaion by Rokid: https://rokid.yuque.com/ouziyq/tvgpgk?#%20%E3%80%8ARokid%20Developer%20Documentation%E3%80%8B
