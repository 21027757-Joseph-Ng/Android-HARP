using UnityEngine;

public class DistanceBasedScaling : MonoBehaviour
{
    public Transform player;
    public Transform objectToScale;
    public float maxDistance = 10f;
    public float minScale = 0.5f;
    public float maxScale = 1f;

    private void Update()
    {
        float distance = Vector3.Distance(player.position, objectToScale.position);
        float t = Mathf.Clamp01(distance / maxDistance);
        float scale = Mathf.Lerp(minScale, maxScale, 1f - t);

        objectToScale.localScale = new Vector3(scale, scale, scale);
    }
}
