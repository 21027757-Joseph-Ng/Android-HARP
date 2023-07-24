using UnityEngine;

public class MotionTrack : MonoBehaviour
{
    // Multiplier to adjust virtual movement speed
    public float virtualMovementSpeed = 1.0f;

    // Complementary filter coefficients
    public float alpha = 0.5f;
    public float beta = 0.5f;

    private Vector3 gravityVector;
    private Quaternion baseRotation;

    private void Start()
    {
        // Get the initial gravity vector from the accelerometer
        gravityVector = Input.acceleration.normalized;
        // Set the base rotation as the current rotation of the GameObject
        baseRotation = transform.rotation;
    }

    private void Update()
    {
        // Get the current accelerometer data
        Vector3 currentAccelData = Input.acceleration.normalized;

        // Calculate the new gravity vector using the complementary filter
        gravityVector = alpha * gravityVector + beta * currentAccelData;

        // Calculate the rotation difference between the base rotation and the current gravity vector
        Quaternion rotationDiff = Quaternion.FromToRotation(baseRotation * Vector3.up, gravityVector);

        // Apply the rotation difference to the GameObject
        transform.rotation = rotationDiff * baseRotation;

        // Move the GameObject in the virtual space based on the accelerometer data
        Vector3 virtualMoveDirection = new Vector3(currentAccelData.x, 0, currentAccelData.y);
        Vector3 virtualMoveAmount = virtualMoveDirection * virtualMovementSpeed * Time.deltaTime;
        transform.Translate(virtualMoveAmount, Space.World);
        Debug.Log(transform.position);
    }
}

