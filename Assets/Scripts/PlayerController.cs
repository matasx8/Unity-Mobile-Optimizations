using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] private Rigidbody rb;
    [SerializeField] private float m_Speed = 1.0f;
    [SerializeField] private float m_SideSpeed = 1.0f;
    [SerializeField] private float m_SwipeStrengthMultiplier = 10.0f; // unused, why do I need this again?
    [SerializeField] private float m_SwipeMovementOnX = 3.0f;

    private float movementX;
    private Vector3 m_RunAxis;
    private bool isDoingMovementFromInput;

    void Start()
    {
        m_RunAxis = new Vector3(0.0f, rb.position.y, rb.position.z);
        isDoingMovementFromInput = false;
    }

    private void OnMove(InputValue movementValue)
    {
        if (!isDoingMovementFromInput)
        {
            Vector2 movementVector = movementValue.Get<Vector2>();
            movementX = movementVector.x;
            Debug.Log(movementX);

            if (movementX != 0.0f)
                UpdateRunAxis(movementX);
        }
    }

    // physics should be handled in FixedUpdate
    private void FixedUpdate()
    {
        rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, m_Speed);

        var dif = m_RunAxis.x - transform.position.x;

        var distance = Mathf.Abs(dif);
        if (distance > 0.0001f)
        {
            // TODO: Sometimes player starts jittering because of floating precision error, fix that
            rb.position = new Vector3(rb.position.x + Mathf.Sign(dif) * m_SideSpeed, rb.position.y, rb.position.z);
        }
        else
        {
            isDoingMovementFromInput = false;
        }
    }

    private void UpdateRunAxis(float xMovement)
    {
        isDoingMovementFromInput = true;
        float newRunXvalue = m_RunAxis.x + Mathf.Sign(xMovement) * m_SwipeMovementOnX;
        m_RunAxis = new Vector3(newRunXvalue, m_RunAxis.y, m_RunAxis.z);
    }

    private void Update()
    {
       // Debug.Log(m_RunAxis);
    }
}
