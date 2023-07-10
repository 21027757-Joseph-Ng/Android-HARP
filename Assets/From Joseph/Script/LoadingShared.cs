using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadingShared : MonoBehaviour//attach in shared, it will dont destroy on load all game object
{
    // Start is called before the first frame update
    void Start()
    {
        DontDestroyOnLoad(gameObject);
    }
}
