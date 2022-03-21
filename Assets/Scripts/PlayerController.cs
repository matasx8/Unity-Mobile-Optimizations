#define DEBUG_MOVEMENT

using UnityEngine;
using UnityEngine.InputSystem;


public class PlayerController : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] private Rigidbody rb;
    [SerializeField] private float fwdForce;
    [SerializeField] private float sideForce;
    [SerializeField] private float m_SwipeMovementOnX = 3.0f;
    [SerializeField] private LayerMask groundLayers;
    [SerializeField] private Transform feetTransform;
    [SerializeField] private float targetFwdSpeed;

    private float movementX;
    private Vector3 m_RunAxis;
    private bool isDoingMovementFromInput;
    public bool shouldContinueMoving
    {
        get;
        private set;
    }

    private bool IsOnGround()
    {
        // use a sphere-cast to check if we are on what we consider ground
        return Physics.CheckSphere(feetTransform.position, 0.15f, groundLayers);
    }

    public bool IsMoving => rb.velocity.magnitude > 0.0f;

    void Start()
    {
        m_RunAxis = new Vector3(0.0f, rb.position.y, rb.position.z);
        isDoingMovementFromInput = false;
        shouldContinueMoving = true;
    }

    // Called by input system package
    private void OnMove(InputValue movementValue)
    {
        if (!isDoingMovementFromInput)
        {
            Vector2 movementVector = movementValue.Get<Vector2>();
            movementX = movementVector.x;
#if DEBUG_MOVEMENT
            Debug.Log(movementX);
#endif
            if (movementX != 0.0f)
                UpdateRunAxis(movementX);
        }
    }

    private void HandleMovement()
    {
        // still an issue exists. If fwdForce is large enough and fps probably slow enough the player can run past the target axis
        // then the corection to stick to axis will be obvious
        // this is a TODO for someone :)
        // if someone does decide to do this please try to fix this without changing much
        // you should be able to smooth out the velocity or force somehow
        if(shouldContinueMoving)
        {
            var playerPosToTargetedRunAxis = m_RunAxis.x - transform.position.x;
            float strafeSpeed;
            float fwdSpeed;
            float epsilon = 0.1f;

            if(Mathf.Abs(playerPosToTargetedRunAxis) > epsilon)
            {
                strafeSpeed = Mathf.Sign(playerPosToTargetedRunAxis) * sideForce;
            }
            else
            {
                // we've reached desired run axis, do correction to stick to axis
                rb.position = new Vector3(m_RunAxis.x, rb.position.y, rb.position.z);
                rb.velocity = new Vector3(0.0f, rb.velocity.y, rb.velocity.z);
                strafeSpeed = 0.0f;
                isDoingMovementFromInput = false;
            }

            fwdSpeed = rb.velocity.z > targetFwdSpeed ? fwdForce : 0;

            rb.AddForce(strafeSpeed * Time.deltaTime, 0.0f, fwdForce * Time.deltaTime);
        }
    }

    private void HandleJump()
    {
        // TODO?
    }

    private void Update()
    {
        HandleMovement();
    }

    // physics should be handled in FixedUpdate
    //private void FixedUpdate()
    //{
    //    if (shouldContinueMoving)
    //    {
    //        rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, m_Speed);

    //        var dif = m_RunAxis.x - transform.position.x;

    //        var distance = Mathf.Abs(dif);
    //        if (distance > 0.0001f)
    //        {
    //            // Sometimes player starts jittering because of floating precision error
    //            rb.position = new Vector3(rb.position.x + Mathf.Sign(dif) * m_SideSpeed, rb.position.y, rb.position.z);
    //        }
    //        else
    //        {
    //            // This should solve the precision error and stop the jittering
    //            rb.position = new Vector3(m_RunAxis.x, rb.position.y, rb.position.z);
    //            isDoingMovementFromInput = false;
    //        }
    //    }
    //}

    private void UpdateRunAxis(float xMovement)
    {
        isDoingMovementFromInput = true;
        float newRunXvalue = m_RunAxis.x + Mathf.Sign(xMovement) * m_SwipeMovementOnX;
        m_RunAxis = new Vector3(newRunXvalue, m_RunAxis.y, m_RunAxis.z);
    }
}
