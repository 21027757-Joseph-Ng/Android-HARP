using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Net.Http;
using System.Text;
//using UnityEngine.WSA;

#if WINDOWS_UWP
using System;
using Windows.Storage;
using Windows.System;
using System.Threading.Tasks;
using Windows.Storage.Streams;
using Windows.Storage.Pickers;
using System.Diagnostics;
#endif

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class ChecklistManager : MonoBehaviour
    {
        /// <summary>
        /// Sets Dialog box prefab
        /// </summary>
        [SerializeField]
        [Tooltip("Assign DialogSmall_192x96.prefab")]
        private GameObject dialogPrefabSmall;

        /// <summary>
        /// Small Dialog example prefab to display
        /// </summary>
        public GameObject DialogPrefabSmall
        {
            get => dialogPrefabSmall;
            set => dialogPrefabSmall = value;
        }

        /// <summary>
        /// Parent of all todolist objects
        /// </summary>
        public Transform content;

        /// <summary>
        /// Prefab of todolist object
        /// </summary>
        public GameObject checklistItemPrefab;

        /// <summary>
        /// Filename of the todolist to save in OneDrive
        /// </summary>
        public string filename;

        /// <summary>
        /// Save button to save json in OneDrive
        /// </summary>
        public Interactable saveButton;

        /// <summary>
        /// Title of the Todolist manager
        /// </summary>
        public TextMeshPro title;

        /// <summary>
        /// To allow spacing between the todolist objects
        /// </summary>
        private float yCoord = 0;

        /// <summary>
        /// Filepath of the todolist
        /// </summary>
        string filePath;

        /// <summary>
        /// Small Dialog example prefab to display
        /// </summary>
        private List<ChecklistObject> checklistObjects = new List<ChecklistObject>();

        /// <summary>
        /// Small Dialog example prefab to display
        /// </summary>
        public class ChecklistItem
        {
            public string objName;
            public bool toggle;
            public int index;

            public ChecklistItem(string name, bool toggle, int index)
            {
                this.objName = name;
                this.toggle = toggle;
                this.index = index;
            }

        }

        /// <summary>
        /// Opens the specific checklist
        /// </summary>
        public void Creation()
        {
            filePath = Application.persistentDataPath + "/checklists/checklists/" + filename;
            LoadJSONData();
            saveButton.OnClick.AddListener(delegate
            {
                SendNewJson();
            });
            title.text = filename.Remove(filename.Length - 4);
        }


        /// <summary>
        /// The filename can be set by the Checklist class
        /// </summary>
        public void SetFileName(string filename)
        {
            this.filename = filename;
        }

        /// <summary>
        /// Translates the todolist back to json
        /// </summary>
        private string GetContents()
        {
            string contents = "";

            for (int i = 0; i < checklistObjects.Count - 1; i++)
            {
                ChecklistItem temp = new ChecklistItem(checklistObjects[i].objName, checklistObjects[i].toggle, checklistObjects[i].index);
                contents += JsonUtility.ToJson(temp) + '\n';
            }
            return contents;
        }

        /// <summary>
        /// Creates a new filename with the date and time
        /// </summary>
        private string GetNewFileName()
        {
            string showFile = filename.Remove(filename.Length - 4);
            var dateTime = DateTime.Now;
            var newFileName = showFile + "_" + dateTime.ToString("ddMMyy") + "_" + dateTime.ToString("HHmm");
            return newFileName;
        }

        /// <summary>
        /// Save the new Json on OneDrive
        /// </summary>
        async void SendNewJson()
        {
            UnityEngine.Debug.Log("start save");
            string contents = GetContents();
            string newFileName = GetNewFileName();
            //Launcher.LaunchUri()
            var accessToken = Graph.ACCESS_TOKEN;
            UnityEngine.Debug.Log("start send");

            var httpContent = new StringContent(contents, Encoding.UTF8, "text/plain");

            var url = $"https://graph.microsoft.com/v1.0/users/be25760b-bf7d-4501-8df2-8e1c673734fa/drive/root:/saved_checklists/{newFileName}.txt:/content";
            //UnityEngine.Debug.Log(url);
            var client = new HttpClient();
            client.BaseAddress = new Uri(url);
            client.DefaultRequestHeaders.Accept.Clear();
            //client.DefaultRequestHeaders.Accept.Add(new System.Net.Http.Headers.MediaTypeWithQualityHeaderValue("application/json"));
            client.DefaultRequestHeaders.Authorization = new System.Net.Http.Headers.AuthenticationHeaderValue("Bearer", accessToken);

            var response = await client.PutAsync(url, httpContent);
            response.EnsureSuccessStatusCode();

            var responseContent = await response.Content.ReadAsStringAsync();
            OpenConfirmationDialogSmall();
        }

        /// <summary>
        /// Display the Dialog box
        /// </summary>
        private void OpenConfirmationDialogSmall()
        {
            Dialog.Open(DialogPrefabSmall, DialogButtonType.OK, "Confirmation", "The TodoList has been saved on OneDrive", true);
        }

        /// <summary>
        /// Creates new checklist line items with the ChecklistObject class
        /// </summary>
        public void CreateCheckListItems(string name, bool toggle, int loadIndex = 0, bool loading = false, bool last = false)
        {
            GameObject item = Instantiate(checklistItemPrefab);

            item.transform.SetParent(content);
            ChecklistObject itemObject = item.GetComponent<ChecklistObject>();
            int index = loadIndex;
            //Debug.Log(itemObject.index);
            if (!loading)
                index = checklistObjects.Count;

            
            itemObject.SetObjectInfo(name, toggle, index);
            itemObject.GetComponentInChildren<TextMeshPro>().text = name;
            itemObject.transform.localScale = new Vector3(0.3762138f, 0.398381f, 1);
            itemObject.transform.localPosition = new Vector3(0.01f, -0.009999983f - yCoord*0.06f, 0);
            yCoord++;
            checklistObjects.Add(itemObject);
            ChecklistObject temp = itemObject;
            itemObject.GetComponent<Interactable>().IsToggled = toggle;
            itemObject.GetComponent<Interactable>().OnClick.AddListener(delegate
            {
                CheckItem(temp);
            });
            if (last == true)
            {
                item.SetActive(false);
            }
            if (!loading)
            {
                SaveJSONData();

            }
        }

        /// <summary>
        /// Check the toggle in the todolist object
        /// </summary>
        void CheckItem(ChecklistObject item)
        {
            item.toggle = !item.toggle;
        }

        /// <summary>
        /// Autosave the json 
        /// </summary>
        void SaveJSONData()
        {
            string contents = "";
            //Debug.Log(checklistObjects[0].objName);
            for (int i = 0; i < checklistObjects.Count; i++)
            {
                ChecklistItem temp = new ChecklistItem(checklistObjects[i].objName, checklistObjects[i].toggle, checklistObjects[i].index);
                contents += JsonUtility.ToJson(temp) + '\n';
            }
            UnityEngine.Debug.Log(filePath);
            System.IO.File.WriteAllText(filePath, contents);
        }

        /// <summary>
        /// Loads the data from the saved Json file
        /// </summary>
        void LoadJSONData()
        {
            if (File.Exists(filePath))
            {
                string contents = File.ReadAllText(filePath);
                string[] splitContents = contents.Split('\n');

                foreach (string content in splitContents)
                {
                    if (content.Trim() != "")
                    {
                        
                        ChecklistItem temp = JsonUtility.FromJson<ChecklistItem>(content);
                        CreateCheckListItems(temp.objName, temp.toggle, temp.index, true, false);
                    }

                }
                CreateCheckListItems("", false, 0, true, true);
                
            }
            else
            {
                UnityEngine.Debug.Log("No File!!");
            }

        }
    }
}
