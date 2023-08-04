using Microsoft.MixedReality.Toolkit.Extensions;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class FaceDetect : MonoBehaviour
    {
        /// <summary>
        /// Allows this class to behave like a singleton
        /// </summary>
        public static FaceDetect Instance;

        /// <summary>
        /// The analysis result text
        /// </summary>
        private TextMesh labelText;

        /// <summary>
        /// Path of the image captured with camera
        /// </summary>
        internal string imagePath;

        /// <summary>
        /// Base endpoint of Face Recognition Service
        /// </summary>
        string baseEndpoint = ApiKeyService.facePredictionApi;//yucheng properly changed this one

        /// <summary>
        /// Auth key of Face Recognition Service
        /// </summary>
        private string key = ApiKeyService.facePredictionKey;

        /// <summary>
        /// Id (name) of the created person group 
        /// </summary>
        private const string personGroupId = "123456";


        /// <summary>
        /// Initialises this class
        /// </summary>
        private void Awake()
        {
            // Allows this instance to behave like a singleton
            Instance = this;

        }

        /// <summary>
        /// Detect faces from a submitted image
        /// </summary>
        public async Task DetectFacesFromImage(byte[] imageBytes)
        {
            var client = new HttpClient();
            key = "0821b718984a46b6b444718cdf6b2ac0";//joseph hard code       try to include the android platform for apikeyservice
            client.DefaultRequestHeaders.Add("Ocp-Apim-Subscription-Key", key);
            Debug.Log("Key: " + key);//debug

            string url = $"{baseEndpoint}detect";

            url = "https://harpface.cognitiveservices.azure.com/face/v1.0/detect";//joseph hard code

            Debug.Log("baseEndpoint: " + baseEndpoint);//debug

            HttpResponseMessage response;

            using (var content = new ByteArrayContent(imageBytes))
            {
                Debug.Log("test loop");
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");
                Debug.Log("test loop2");
                response = await client.PostAsync(url, content);
                Debug.Log("Url: " + url);

                var resContent = await response.Content.ReadAsStringAsync();
                Debug.Log("{\"allFaces\":" + resContent + "}");
                var face_RootObject = JsonUtility.FromJson<Face_Rootobject>("{\"allFaces\":" + resContent + "}");

                List<string> facesIdList = new List<string>();
                // Create a list with the face Ids of faces detected in image
                foreach (Allface faceRO in face_RootObject.allFaces)
                {
                    facesIdList.Add(faceRO.faceId);
                    Debug.Log($"Detected face - Id: {faceRO.faceId}");
                    //FaceTracking.Instance.CreateBoundingBox(faceRO.faceRectangle);
                }

                await IdentifyFaces(facesIdList);

            }

        }

        /// <summary>
        /// Identify the faces found in the image within the person group
        /// </summary>
        public async Task IdentifyFaces(List<string> listOfFacesIdToIdentify)
        {
            // Create the object hosting the faces to identify
            Debug.Log("IdentifyFaces");
            
            FacesToIdentify_RootObject facesToIdentify = new FacesToIdentify_RootObject();
            facesToIdentify.faceIds = new List<string>();
            facesToIdentify.personGroupId = personGroupId;

            Debug.Log("before loop");
            
            foreach (string facesId in listOfFacesIdToIdentify)
            {
                facesToIdentify.faceIds.Add(facesId);
                Debug.Log("during loop");
            }

            Debug.Log("After loop");

            facesToIdentify.maxNumOfCandidatesReturned = 10;
            facesToIdentify.confidenceThreshold = 0.5;

            // Serialize to Json format
            string facesToIdentifyJson = JsonUtility.ToJson(facesToIdentify);
            Debug.Log(facesToIdentifyJson);
            // Change the object into a bytes array
            byte[] facesData = Encoding.UTF8.GetBytes(facesToIdentifyJson);


            using (var client = new HttpClient())
            {
                // This would be the like http://www.uber.com
                //client.BaseAddress = new Uri("Base Address/URL Address");
                string url = $"{baseEndpoint}identify";

                url = "https://harpface.cognitiveservices.azure.com/face/v1.0/identify";//joseph hard code
                
                client.DefaultRequestHeaders.Add("Ocp-Apim-Subscription-Key", key);
                // serialize your json using newtonsoft json serializer then add it to the StringContent
                var content = new StringContent(facesToIdentifyJson, Encoding.UTF8, "application/json");

                var result = await client.PostAsync(url, content);
                string resultContent = await result.Content.ReadAsStringAsync();
                Debug.Log("{\"returnedFaces\":" + resultContent + "}");
                Candidate_RootObject candidate_RootObject = JsonUtility.FromJson<Candidate_RootObject>("{\"returnedFaces\":" + resultContent + "}");

                // For each face to identify that ahs been submitted, display its candidate
                foreach (Returnedface candidateRO in candidate_RootObject.returnedFaces)
                {
                    await GetPerson(candidateRO.candidates[0].personId);
                }
            }

        }

        /// <summary>
        /// Provided a personId, retrieve the person name associated with it
        /// </summary>
        public async Task GetPerson(string personId)
        {
            string getGroupEndpoint = $"{baseEndpoint}persongroups/{personGroupId}/persons/{personId}?";
            
            getGroupEndpoint = "https://harpface.cognitiveservices.azure.com/face/v1.0/persongroups/123456/persons/" + personId + "?";//joseph hard code

            using (var client = new HttpClient())
            {
                client.DefaultRequestHeaders.Add("Ocp-Apim-Subscription-Key", key);
                var result = await client.GetAsync(getGroupEndpoint);
                string resultContent = await result.Content.ReadAsStringAsync();

                Debug.Log($"Get Person - jsonResponse: {resultContent}");
                IdentifiedPerson_RootObject identifiedPerson_RootObject = JsonUtility.FromJson<IdentifiedPerson_RootObject>(resultContent);
                Debug.Log(identifiedPerson_RootObject.name);
                ClickedDetect clickedDetect = gameObject.GetComponent<ClickedDetect>();
                Debug.Log("Testing log");
                clickedDetect.CreateBoundingBox(identifiedPerson_RootObject);
            }
        }


    }

}
