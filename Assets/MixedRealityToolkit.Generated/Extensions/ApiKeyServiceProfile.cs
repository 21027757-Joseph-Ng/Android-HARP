using System;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Extensions
{
	[MixedRealityServiceProfile(typeof(IApiKeyService))]
	[CreateAssetMenu(fileName = "ApiKeyServiceProfile", menuName = "MixedRealityToolkit/ApiKeyService Configuration Profile")]
	public class ApiKeyServiceProfile : BaseMixedRealityProfile
	{
        /// <summary>
        /// The API URL for Todo List.
        /// </summary>
        [Tooltip("API URL of Microsoft Graph to get all pre-made Todo Lists")]
        public string graphTodoListApi = "";

        /// <summary>
        /// The API Key for Todo List
        /// </summary>
        [Tooltip("API Key of Microsoft Graph to get all pre-made Todo Lists")]
        public string graphTodoListKey = "";
        
        /// <summary>
        /// The API Key for Todo List
        /// </summary>
        [Tooltip("API Key of Microsoft Graph to get all pre-made Todo Lists")]
        public string graphTodoListClientId = "";

        /// <summary>
        /// The Prediction URL of the Custom Vision Prediction API.
        /// </summary>
        [Tooltip("Prediction URL of Custom Vision Prediction API. To be found under Performance > Prediction URL > If you have an image file")]
        public string customVisionPredictionApi = "";

        /// <summary>
        /// The Prediction Key of the Custom Vision Prediction API.
        /// </summary>
        [Tooltip("Prediction key of Custom Vision Prediction API. To be found under Performance > Prediction URL > If you have an image file")]
        public string customVisionPredictionKey = "";
        
        /// <summary>
        /// The Prediction URL of the Custom Vision Prediction API.
        /// </summary>
        [Tooltip("Prediction URL of Face Prediction API. To be found under Performance > Prediction URL > If you have an image file")]
        public string facePredictionApi = "";

        /// <summary>
        /// The Prediction Key of the Custom Vision Prediction API.
        /// </summary>
        [Tooltip("Prediction key of Face Prediction API. To be found under Performance > Prediction URL > If you have an image file")]
        public string facePredictionKey = "";
    }
}