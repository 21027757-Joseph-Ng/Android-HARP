using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class TodoClose : MonoBehaviour
    {
        /// <summary>
        /// To close the specific todolist
        /// </summary>
        public void CloseTodo(GameObject item)
        {
            Destroy(item);
        }
    }
}
