using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Microsoft.MixedReality.OpenXR.BasicSample
{

    public class OpenCheckList : MonoBehaviour
    {
        
        public GameObject checklistMenu;
        private bool m_Enter = false;

        public void OnPointerEnter()
        {
            m_Enter = true;
            VoiceCommandLogic.Instance.AddInstrucEntityZH("打开", "da kai", true, true, true, this.gameObject.name, "Open", "打开");
        }

        public void OnPointerExit()
        {
            m_Enter = false;
            VoiceCommandLogic.Instance.RemoveInstructZH("打开");
        }

        // Update is called once per frame
        void Update()
        {
            if (!m_Enter) return;
            //if (Application.platform == RuntimePlatform.Android)
            //{
            if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Return))
            {
                OpenLists(checklistMenu);
            }
            //}
        }

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

        //public UnityEvent OnClick
       // {
          //  get
          //  {
            //    if (interactable == null)
            //    {
           //         Debug.LogWarning("No interactable set in " + name + " - returning an empty OnClick event.");
                //    return emptyOnClickEvent;
           //     }

           //     return interactable.OnClick;
          //  }
        //}
    }
}
