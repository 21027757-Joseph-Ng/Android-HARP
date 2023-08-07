using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LTA.Holoapp
{
    public class ClearLabels : MonoBehaviour
    {
        /// <summary>
        /// Gets the parent where all the labels are saved under
        /// </summary>
        public Transform parent;

        /// <summary>
        /// Deletes all the labels under the parent GameObject
        /// </summary>
        public void ClearAllLabels()
        {
            foreach (Transform child in parent)
            {
                GameObject.Destroy(child.gameObject);
            }
        }
    }
}
