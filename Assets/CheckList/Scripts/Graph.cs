using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Net.Http;
using System;
using UnityEngine.Serialization;
using Newtonsoft.Json;
using System.Net;
using System.IO;
using System.Threading.Tasks;
using System.ComponentModel;
using System.IO.Compression;
using UnityEditor;
using Microsoft.MixedReality.Toolkit.Extensions;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    
    
    public class Graph : MonoBehaviour
    {
        /// <summary>
        /// Runs the Splash screen when Scene is loaded
        /// </summary>
        private static bool IsFirstLoad = true;

        /// <summary>
        /// Runs the Splash screen when Scene is loaded
        /// </summary>
        public static string ACCESS_TOKEN = null;

        [Serializable]
        public class AzureADToken
        {
            public string token_type;
            public int expires_in;
            public int ext_expires_in;
            public string access_token;
        }
        [Serializable]
        public class Rootobject
        {
            public string odatacontext;
            public string microsoftgraphdownloadUrl;
        }

        /// <summary>
        /// Runs when the scene is loaded
        /// </summary>
        async void Start()
        {
            if (IsFirstLoad)
            {
                IsFirstLoad = false;
                await Auth();
            }
            
            
        }

        /// <summary>
        /// Authenticates with the Azure AD to get access token
        /// </summary>
        async Task Auth()
        {
            var clientId = "359fbb04-c9d7-4c87-b81d-6f7369e67225";
            var secret = "H7H8Q~v6d5EY3R4npwAIOI_jTRcGHkeWfH9Q2bON";
            //var clientId = "fc474e3f-1a2c-4358-9ef3-e8df4ea90376";
            //var secret = "Lw68Q~uQnbY6hn5t646JxfgxAkELI4Z2a~vyqcqx";
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
            //Debug.Log(responseContent);
            AzureADToken aadToken = JsonUtility.FromJson<AzureADToken>(responseContent);
            string accessToken = aadToken.access_token;
            //Debug.Log(toReturn);
            Debug.Log("Received access token");
            ACCESS_TOKEN = accessToken;
            await GetURL(accessToken);



        }

        /// <summary>
        /// Gets the download url for the todo lists
        /// </summary>
        async Task GetURL(string accessToken)
        {
            string url = ApiKeyService.graphTodoListApi;
            var client = new HttpClient();
            client.BaseAddress = new Uri(url);
            client.DefaultRequestHeaders.Accept.Clear();
            client.DefaultRequestHeaders.Accept.Add(new System.Net.Http.Headers.MediaTypeWithQualityHeaderValue("application/json"));
            client.DefaultRequestHeaders.Authorization = new System.Net.Http.Headers.AuthenticationHeaderValue("Bearer", accessToken);
            
            
            var responseMessage = await client.GetAsync(url);
            responseMessage.EnsureSuccessStatusCode();
            //Debug.Log(responseMessage.EnsureSuccessStatusCode());

            var responseContent = await responseMessage.Content.ReadAsStringAsync();
            //Debug.Log(responseContent);
            responseContent = responseContent.Replace("@microsoft.graph.downloadUrl", "microsoftgraphdownloadUrl");
            responseContent = responseContent.Replace("@odata.context", "odatacontext");
            //Debug.Log(responseContent);
            Rootobject aadToken = JsonUtility.FromJson<Rootobject>(responseContent);
            string downloadUrl = aadToken.microsoftgraphdownloadUrl;
            //Debug.Log(downloadUrl);
            await DownloadZip(downloadUrl);
        }

        /// <summary>
        /// Downloads the todo lists
        /// </summary>
        async Task DownloadZip(string downloadUrl)
        {
            string filePath = Application.persistentDataPath + "/checklists.zip";
            Debug.Log("Downloading to" + filePath);
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
            }
            WebClient client = new WebClient();
            Uri uri = new Uri(downloadUrl);

            // Specify a DownloadFileCompleted handler here...
            client.DownloadFileCompleted += new AsyncCompletedEventHandler(DownloadFileCallback2);
            // Specify a progress notification handler.
            client.DownloadProgressChanged += new DownloadProgressChangedEventHandler(DownloadProgressCallback4);

            client.DownloadFileAsync(uri, filePath);
            
        }

        /// <summary>
        /// Debug log when the download is completed 
        /// </summary>
        private static void DownloadProgressCallback4(object sender, DownloadProgressChangedEventArgs e)
        {
            // Displays the operation identifier, and the transfer progress.
            Debug.Log((string)e.UserState + "downloaded" + e.BytesReceived + "of" + e.TotalBytesToReceive+ "bytes." + e.ProgressPercentage+" % complete...");
        }

        /// <summary>
        /// Debug Log the download progress of the file
        /// </summary>
        private static async void DownloadFileCallback2(object sender, AsyncCompletedEventArgs e)
        {
            if (e.Cancelled)
            {
                Debug.Log("File download cancelled.");
            }

            if (e.Error != null)
            {
                Debug.Log(e.Error.ToString());
            }

            else
            {
                Debug.Log("Downloaded zip file");
                await ExtractFile();
            }
        }

        /// <summary>
        /// Extracts file and save to local persistant data path
        /// </summary>
        static async Task ExtractFile()
        {
            
            string folderPath = @Application.persistentDataPath + "/checklists";
            string newFolderPath = @Application.persistentDataPath;
            string zipFilePath = @Application.persistentDataPath + "/checklists.zip";
            if (Directory.Exists(folderPath))
            {
                Directory.Delete(folderPath, true);
                //FileUtil.DeleteFileOrDirectory(folderPath);
                //Directory.Delete(folderPath);
            }
            Debug.Log("Extracting");
            
            ZipFile.ExtractToDirectory(zipFilePath, folderPath);
            Debug.Log("File extracted"); 
        }


    }
}
