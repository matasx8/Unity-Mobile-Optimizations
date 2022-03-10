using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private Rigidbody rb;
    private float movementX;
    private float movementY;
    public float speed = 1.0f;
    public float m_SwipeStrengthMultiplier = 10.0f;
    private Vector3 m_RunAxis;
    private float m_SwipeMovementOnX = 3.0f;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        m_RunAxis = new Vector3(0.0f, rb.position.y, rb.position.z);
    }

    private void OnMove(InputValue movementValue)
    {
        Vector2 movementVector = movementValue.Get<Vector2>();
        movementX = movementVector.x;
        Debug.Log(movementX);

        if(movementX != 0.0f)
            UpdateRunAxis(movementX);
    }

    // physics should be handled in FixedUpdate
    private void FixedUpdate()
    {
        rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, speed);

        var dif = m_RunAxis.x - transform.position.x;

        var distance = Mathf.Abs(dif);
        if (distance > 0.0001f)
        {
            // TODO: Sometimes player starts jittering because of floating precision error, fix that
            rb.position = new Vector3(rb.position.x + Mathf.Sign(dif) * 0.1f, rb.position.y, rb.position.z);
        }
    }

    private void UpdateRunAxis(float xMovement)
    {

        float newRunXvalue = m_RunAxis.x + Mathf.Sign(xMovement) * m_SwipeMovementOnX;
        m_RunAxis = new Vector3(newRunXvalue, m_RunAxis.y, m_RunAxis.z);
    }

    private void Update()
    {
       // Debug.Log(m_RunAxis);
    }
}
