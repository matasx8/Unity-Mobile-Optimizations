using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    public Transform m_PlayerTransform;
    public float m_CameraOffsetZ = 15.0f;

    // Update is called once per frame
    void Update()
    {
        var transform = GetComponent<Transform>();
        transform.position = new Vector3(transform.position.x, transform.position.y, m_PlayerTransform.position.z - m_CameraOffsetZ);
    }
}
