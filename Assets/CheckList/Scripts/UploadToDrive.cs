using Microsoft.MixedReality.OpenXR.BasicSample;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using System.IO;

public class UploadToDrive : MonoBehaviour
{
    public GameObject parentObject;
    private List<ChecklistObject> checklistObjects = new List<ChecklistObject>();
    public string filename;
    public static string ACCESS_TOKEN = null;
    private string checkListContents;

    async Task StartAsync()
    {
        // var clientId = ApiKeyService.graphTodoListClientId;
        // var secret = ApiKeyService.graphTodoListKey;
        var clientId = "359fbb04-c9d7-4c87-b81d-6f7369e67225";
        var secret = "H7H8Q~v6d5EY3R4npwAIOI_jTRcGHkeWfH9Q2bON";
        var grant_type = "client_credentials";
        var redirect_uri = "https://localhost";
        var scope = "https://graph.microsoft.com/.default";
        var requestUrl = "https://login.microsoftonline.com/0dc974ed-3f76-4f60-b245-02aa22f02dae/oauth2/v2.0/token";

        var httpClient = new HttpClient();
        var dict = new Dictionary<string, string>
            {
                { "grant_type", grant_type },
                { "client_id", clientId },
                { "client_secret", secret },
                { "redirect_uri", redirect_uri },
                { "scope", scope }
            };

        var requestBody = new FormUrlEncodedContent(dict);
        var response = await httpClient.PostAsync(requestUrl, requestBody);

        response.EnsureSuccessStatusCode();
        //Debug.Log(response.EnsureSuccessStatusCode());

        var responseContent = await response.Content.ReadAsStringAsync();
        Debug.Log(responseContent);
        Graph.AzureADToken aadToken = JsonUtility.FromJson<Graph.AzureADToken>(responseContent);
        string accessToken = aadToken.access_token;
        //Debug.Log(toReturn);
        Debug.Log("Received access token");
        ACCESS_TOKEN = accessToken;
        // Debug.Log(accessToken);
        // await GetURL(accessToken);
        SaveLocally();
        SendNewJson();
    }

    public string getInfo()
    {
        String contents = "";
       ChecklistObject[] newList = parentObject.GetComponentsInChildren<ChecklistObject>();

        for (int i = 0; i < newList.Length; i++)
        {
            // Debug.Log(newList[i].toggle);
            // Debug.Log(newList[i].objName);

            ChecklistObject temp = new ChecklistObject(newList[i].objName,newList[i].toggle,newList[i].index);
            contents += JsonUtility.ToJson(temp) + '\n';
        }

        return contents;
    }

    public string GetContents()
    {
        String contents = "";
        ChecklistObject[] newList = parentObject.GetComponentsInChildren<ChecklistObject>();

        for (int i = 0; i < newList.Length; i++)
        {
            // Debug.Log(newList[i].toggle);
            // Debug.Log(newList[i].objName);

            ChecklistObject temp = new ChecklistObject(newList[i].objName, newList[i].toggle, newList[i].index);
            contents += JsonUtility.ToJson(temp) + '\n';
        }

        return contents;
    }

    public string GetNewFileName()
    {
        string showFile = filename.Remove(filename.Length - 4);
        var dateTime = DateTime.Now;
        var newFileName = showFile + "_" + dateTime.ToString("ddMMyy") + "_" + dateTime.ToString("HHmm");
        return newFileName;
    }

    async void SendNewJson()
    {
        UnityEngine.Debug.Log("start save");
        string contents = checkListContents;
        string newFileName = GetNewFileName();
        //Launcher.LaunchUri()
        var accessToken = ACCESS_TOKEN;
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
    }

    public async void startSave()
    {
        checkListContents = GetContents();
        Debug.Log("Starting Save Clicked");
        await StartAsync();

    }

    private void SaveLocally()
    {
        string content = checkListContents;//the file or the string that structured in json format, save it locally
        string fileName = GetNewFileName();
        string directoryPath = "/sdcard/Documents";

        if (!Directory.Exists(directoryPath))
        {
            Debug.Log("File path don't exist");
        }

        else
        {
            string filePath = Path.Combine(directoryPath, fileName + ".txt");

            File.WriteAllText(filePath, content);
            Debug.Log("saved locally");
        }
    }


    //async void Start()
    //{
    //    checkListContents = GetContents();
    //    Debug.Log("Starting Save Clicked");
    //    await StartAsync();
    //}

}
