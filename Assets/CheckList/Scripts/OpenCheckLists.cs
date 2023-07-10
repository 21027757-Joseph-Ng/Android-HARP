using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample

{
    public class OpenCheckLists : MonoBehaviour
    {
        /// <summary>
        /// Opens the All Todo Lists
        /// </summary>
        public void OpenLists(GameObject checklistMenu)
        {
            checklistMenu.SetActive(true);
        }

        /// <summary>
        /// Closes the All Todo Lists
        /// </summary>
        public void CloseLists(GameObject checklistMenu)
        {
            checklistMenu.SetActive(false);
        }
    }
}
