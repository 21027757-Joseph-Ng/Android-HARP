using System.Collections;
using System.Collections.Generic;
using TMPro;
//using TMPro;
using UnityEngine;
using UnityEngine.UI;


namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class ChecklistObject : MonoBehaviour
    {
        /// <summary>
        /// Sets the name for each todo component
        /// </summary>
        public string objName;
        /// <summary>
        /// Sets the toggle for each todo component
        /// </summary>
        public bool toggle;

        /// <summary>
        /// Sets the index for each todo component
        /// </summary>
        public int index;

        /// <summary>
        /// Finds the TextMeshPro component
        /// </summary>
        private TextMeshPro itemText;

        //Added Object
        public ChecklistObject(string objName, bool toggle, int index)
        {
            this.objName = objName;
            this.toggle = toggle;
            this.index = index;
        }

        /// <summary>
        /// Runs when the scene is loaded
        /// </summary>
        private void Start()
        {
            itemText = GetComponentInChildren<TextMeshPro>();

        }

        /// <summary>
        /// Sets the ChecklistObject info from the ChecklistManager class
        /// </summary>
        public void SetObjectInfo(string name, bool toggle, int index)
        {
            this.objName = name;
            this.toggle = toggle;
            this.index = index;
        }

        public void setToggle()
        {
            if (toggle == false)
            {
                toggle = true;
                Debug.Log("Toggle is set to " + toggle);
                
            }
            else
            {
                toggle = false;
                Debug.Log("Toggle is set to " + toggle);
            }
        }
    }
}
