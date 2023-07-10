using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{

    public class FaceAnalysisObject
    {
    }

    /// <summary>
    /// The Person Group object
    /// </summary>
    public class Group_RootObject
    {
        public string personGroupId { get; set; }
        public string name { get; set; }
        public object userData { get; set; }
    }

    /// <summary>
    /// The Person Face object
    /// </summary>
    [Serializable]
    public class Face_Rootobject
    {
        public Allface[] allFaces;
    }
    [Serializable]
    public class Allface
    {
        public string faceId;
        public Facerectangle faceRectangle;
    }
    [Serializable]
    public class Facerectangle
    {
        public int top;
        public int left;
        public int width;
        public int height;
    }


    /// <summary>
    /// Collection of faces that needs to be identified
    /// </summary>
    [Serializable]
    public class FacesToIdentify_RootObject
    {
        public string personGroupId;
        public List<string> faceIds;
        public int maxNumOfCandidatesReturned;
        public double confidenceThreshold;
    }


    /// <summary>
    /// Collection of Candidates for the face
    /// </summary>
    [Serializable]
    public class Candidate_RootObject
    {
        public Returnedface[] returnedFaces;
    }
    [Serializable]
    public class Returnedface
    {
        public string faceId;
        public Candidate[] candidates;
    }
    [Serializable]
    public class Candidate
    {
        public string personId;
        public float confidence;
    }



    /// <summary>
    /// Name and Id of the identified Person
    /// </summary>
    [Serializable]
    public class IdentifiedPerson_RootObject
    {
        public string personId;
        public string[] persistedFaceIds;
        public string name;
    }


}
