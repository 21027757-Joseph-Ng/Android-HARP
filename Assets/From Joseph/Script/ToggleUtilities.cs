using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class ToggleUtilities : MonoBehaviour
    {
        public void ToToggle()
        {
            GameObject utils = GameObject.FindWithTag("Util");
            for (int i = 0; i < utils.transform.childCount; i++)
            {
                utils.transform.GetChild(i).gameObject.SetActive(!utils.transform.GetChild(i).gameObject.activeSelf);
            }
        }
    }
}
