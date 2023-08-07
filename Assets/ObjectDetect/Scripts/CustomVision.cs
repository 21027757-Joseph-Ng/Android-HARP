using Microsoft.MixedReality.Toolkit.Extensions;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class CustomVision : MonoBehaviour
    {
        /// <summary>
        /// Creates an Instance for the CustomVision so that the methods are avaliable in other classes
        /// </summary>
        public static CustomVision Instance;

        /// <summary>
        /// Object for the json string to be deserialised into 
        /// </summary>
        private CustomVisionAnalysisObject res;

        /// <summary>
        /// Runs before the scene is loaded
        /// </summary>
        private void Awake()
        {
            Instance = this;
        }

        /// <summary>
        /// Makes an API call to detect objects in an image
        /// </summary>
        public async Task<CustomVisionAnalysisObject> MakePredictionRequest(byte[] byteArray)
        {

            string key = "e4ef65ff51c24a5091df617edb90dbfb";
            var client = new HttpClient();
            client.DefaultRequestHeaders.Add("Prediction-Key", key);

            // string url = ApiKeyService.customVisionPredictionApi;

            string url = "https://harpobj-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/658a002d-71d2-4bae-b812-cb39b9280f3d/detect/iterations/Iteration1/image";

            HttpResponseMessage response;

            using (var content = new ByteArrayContent(byteArray))
            {
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");
                response = await client.PostAsync(url, content);
                response.EnsureSuccessStatusCode();
                var resContent = await response.Content.ReadAsStringAsync();
                Debug.Log(resContent);
                res = JsonUtility.FromJson<CustomVisionAnalysisObject>(resContent);
            }
            return res;
        }
    }
}
