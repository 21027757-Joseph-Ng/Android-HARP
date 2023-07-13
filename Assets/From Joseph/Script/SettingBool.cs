using UnityEngine;

[CreateAssetMenu(fileName = "NewBoolData", menuName = "ScriptableObjects/BoolData")]
public class SettingBool : ScriptableObject
{
    [SerializeField]
    public bool settingON;
}
