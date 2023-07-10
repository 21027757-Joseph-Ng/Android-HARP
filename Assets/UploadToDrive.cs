using Microsoft.MixedReality.OpenXR.BasicSample;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Text;
using UnityEngine;

public class UploadToDrive : MonoBehaviour
{
    public GameObject parentObject;
    private List<ChecklistObject> checklistObjects = new List<ChecklistObject>();
    public string filename;

    public string getInfo()
    {
        String contents = "";
       ChecklistObject[] newList = parentObject.GetComponentsInChildren<ChecklistObject>();

        for (int i = 0; i < newList.Length; i++)
        {
            Debug.Log(newList[i].toggle);
            Debug.Log(newList[i].objName);

            ChecklistObject temp = new ChecklistObject(newList[i].objName,newList[i].toggle,newList[i].index);
            contents += JsonUtility.ToJson(temp) + '\n';
        }

        return contents;
    }

    private string GetContents()
    {
        string contents = "";

        for (int i = 0; i < checklistObjects.Count - 1; i++)
        {
            //  temp = new ChecklistItem(checklistObjects[i].objName, checklistObjects[i].toggle, checklistObjects[i].index);
            // contents += JsonUtility.ToJson(temp) + '\n';
        }
        return contents;
    }

    private string GetNewFileName()
    {
        string showFile = filename.Remove(filename.Length - 4);
        var dateTime = DateTime.Now;
        var newFileName = showFile + "_" + dateTime.ToString("ddMMyy") + "_" + dateTime.ToString("HHmm");
        return newFileName;
    }

    async void SendNewJson()
    {
        UnityEngine.Debug.Log("start save");
        string contents = getInfo();
        string newFileName = GetNewFileName();
        //Launcher.LaunchUri()
        var accessToken = Graph.ACCESS_TOKEN;
        UnityEngine.Debug.Log("start send");

        var httpContent = new StringContent(contents, Encoding.UTF8, "text/plain");

        var url = $"https://graph.microsoft.com/v1.0/users/ltaholo@ltaholotestoutlook.onmicrosoft.com/drive/root:/saved_checklists/{newFileName}.txt:/content";
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

    public void startSave()
    {
        SendNewJson();
    }
}
