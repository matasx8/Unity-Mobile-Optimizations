#define DEBUG_MOVEMENT

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
// player movement is kind of buggy but gonna be good enough unless someone fixes it
public class PlayerController : MonoBehaviour
{
    SwipeDetection swipeDetection;
    public bool alive = true;
    public GameOverUI GameOverUI;
    [Header("Movement Settings")]
    [SerializeField] private Rigidbody rb;
    [SerializeField] private float fwdForce;
    [SerializeField] private float sideForce;
    [SerializeField] private float jumpSpeed;
    [SerializeField] private float m_SwipeMovementOnX = 3.0f;
    [SerializeField] private LayerMask groundLayers;
    [SerializeField] private Transform feetTransform;
    [SerializeField] private float targetFwdSpeed;


    [Header("Animation Settings")]
    [SerializeField] private Animator animator;

    private float movementX;
    private float movementY;
    private Vector3 m_RunAxis;
    private bool isDoingMovementFromInput;
    public bool shouldContinueMoving
    {
        get;
        private set;
    }
    
    // physics stuff
    private struct PlayerColliderInfo
    {
        public float height;
        public Vector3 center;
    }
    private CapsuleCollider playerCollider;
    private const float PLAYER_UPRIGHT_HEIGHT = 1.7f;
    private PlayerColliderInfo playerColliderInfo;

    private void Awake()
    {
        swipeDetection = SwipeDetection.Instance;
    }

    private void OnEnable()
    {
        swipeDetection.OnSwiped += OnSwiped;
    }

    private void OnDisable()
    {
        swipeDetection.OnSwiped -= OnSwiped;
    }

    private bool IsOnGround()
    {
        // use a sphere-cast to check if we are on what we consider ground
        return Physics.CheckSphere(feetTransform.position, 0.01f, groundLayers);
    }

    public bool IsMoving => rb.velocity.magnitude > 0.0f;

    void Start()
    {
        m_RunAxis = new Vector3(0.0f, rb.position.y, rb.position.z);
        isDoingMovementFromInput = false;
        shouldContinueMoving = true;

        // cache stuff about player collider
        playerCollider = GetComponent<CapsuleCollider>();
        playerColliderInfo.height = playerCollider.height;
        playerColliderInfo.center = playerCollider.center;
    }

    void OnSwiped(Vector2 dir)
    {
        if (!isDoingMovementFromInput)
        {
            Vector2 movementVector = dir;
            //Debug.Log(movementVector);
            movementX = movementVector.x;
            movementY = movementVector.y;
#if DEBUG_MOVEMENT
            Debug.Log(movementX);
#endif 
            if (movementX != 0.0f)
                UpdateRunAxis(movementX);
        }
    }

    // Called by input system package
    private void OnMove(InputValue movementValue)
    {
        if (!isDoingMovementFromInput)
        {
            Vector2 movementVector = movementValue.Get<Vector2>();
            Debug.Log(movementVector);
            movementX = movementVector.x;
            movementY = movementVector.y;
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
        if(!alive) return;
        var playerPosToTargetedRunAxis = m_RunAxis.x - transform.position.x;
        float strafeSpeed;
        float fwdSpeed;
        float epsilon = 0.2f;

        string directionStr = Mathf.Sign(playerPosToTargetedRunAxis) >= 0.0f ? "isRunningRight" : "isRunningLeft";
        string opposiuteDirStr = Mathf.Sign(playerPosToTargetedRunAxis) < 0.0f ? "isRunningRight" : "isRunningLeft";

        if (Mathf.Abs(playerPosToTargetedRunAxis) > epsilon)
        {
            strafeSpeed = Mathf.Sign(playerPosToTargetedRunAxis) * sideForce;
            animator.SetBool(directionStr, true);
            animator.SetBool(opposiuteDirStr, false);
        }
        else
        {
            // we've reached desired run axis, do correction to stick to axis
            rb.position = new Vector3(m_RunAxis.x, rb.position.y, rb.position.z);
            rb.velocity = new Vector3(0.0f, rb.velocity.y, rb.velocity.z);
            strafeSpeed = 0.0f;
            isDoingMovementFromInput = false;

            animator.SetBool(directionStr, false);
            animator.SetBool(opposiuteDirStr, false);
        }

        fwdSpeed = rb.velocity.z > targetFwdSpeed ? fwdForce : 0;

        //if(IsOnGround())
        
            rb.AddForce(strafeSpeed * Time.deltaTime, 0.0f, fwdForce * Time.deltaTime);
    }

    private void HandleJumpOrSlide()
    {
        if(CanAnimationBeInterrupted())
        {
            if(movementY > 0.0f)         // jump
            {
                animator.SetBool("isJumping", true);

                rb.velocity = new Vector3(rb.velocity.x, jumpSpeed, rb.velocity.z);
            }
            else if(movementY < 0.0f)     // slide
            {
                ConfigureSliding(true);
                animator.SetBool("isSliding", true);
            }
        }
    }

    private void Update()
    {
        Upkeep();

    if (shouldContinueMoving)
    {
        HandleMovement();
        HandleJumpOrSlide();

    }
    if(transform.position.y < -5)
        Die();
        
        movementX = 0;
        movementY = 0;

#if DEBUG_MOVEMENT
        //Debug.Log("Animator state: " + animator.GetBool("isRunningLeft").ToString() + " - " + animator.GetBool("isRunningRight").ToString());
#endif
    }

    void Upkeep()
    {
        // can set this to false immediately because animation will stop playing when its done
        animator.SetBool("isSliding", false);
        animator.SetBool("isJumping", false);
    }

    private void UpdateRunAxis(float xMovement)
    {
        if (CanAnimationBeInterrupted())
        {
            isDoingMovementFromInput = true;
            float newRunXvalue = m_RunAxis.x + Mathf.Sign(xMovement) * m_SwipeMovementOnX;
            m_RunAxis = new Vector3(newRunXvalue, m_RunAxis.y, m_RunAxis.z);
        }
    }

    private bool CanAnimationBeInterrupted()
    {
        bool can = IsOnGround() && !animator.GetBool("isRunningRight") && !animator.GetBool("isRunningLeft");
        if (animator.GetCurrentAnimatorStateInfo(0).IsName("run_slide"))
        {
            if (!(animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f))
            {
                return false;
            }
            else
            {
                ConfigureSliding(false);
            }
        }
        return can;
    }

    private void ConfigureSliding(bool isSliding)
    {
        if (isSliding)
        {
            const float colliderheight = 1f;
            Vector3 collidercenter = new Vector3(0.0f, 0.5f, 0.0f);

            playerCollider.center = collidercenter;
            playerCollider.height = colliderheight;
        }
        else
        {
            playerCollider.center = playerColliderInfo.center;
            playerCollider.height = playerColliderInfo.height;
        }
    }
    public void Die ()
    {
        alive = false;
        GameOverUI.GetGameOver();
        
    }
    //TODO: tags aren't working and obstacle names are "Cube"
    void OnCollisionEnter (Collision collision){
        //Kill the player
        if(collision.collider.name == "Cube")
            Die();
        
    }
}
