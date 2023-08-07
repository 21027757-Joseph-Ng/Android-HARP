using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{

    [Serializable]
    public class CustomVisionAnalysisObject
    {
        public string id;
        public string project;
        public string iteration;
        public DateTime created;
        public List<Prediction> predictions;
    }
    [Serializable]
    public class Prediction
    {
        public float probability;
        public string tagId;
        public string tagName;
        public Boundingbox boundingBox;
    }
    [Serializable]
    public class Boundingbox
    {
        public float left;
        public float top;
        public float width;
        public float height;
    }

    public class CustomVisionObject : MonoBehaviour
    {
    }
}
