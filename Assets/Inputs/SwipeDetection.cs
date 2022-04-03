using UnityEngine;
using System.Collections;

[DefaultExecutionOrder(-1)]
public class SwipeDetection : Singleton<SwipeDetection>
{
    public delegate void OnSwipe(Vector2 val);
    public event OnSwipe OnSwiped;

    [SerializeField] private float minimumDistance = .2f;
    [SerializeField] private float maximumTime = 1.0f;
    [SerializeField, Range(0, 1)] private float directionThreshold = 0f;

    private InputManager inputManager;

    private Vector2 startPosition;
    private float startTime;

    private Vector2 endPosition;
    private float endTime;

    private void Awake()
    {
        inputManager = InputManager.Instance;
    }

    private void OnEnable()
    {
        inputManager.OnStartTouch += SwipeStart;
        inputManager.OnEndTouch += SwipeEnd;
    }

    private void OnDisable()
    {
        inputManager.OnStartTouch -= SwipeStart;
        inputManager.OnEndTouch -= SwipeEnd;
    }

    private void SwipeStart(Vector2 position, float time)
    {
        Debug.Log("Bruv");
        startPosition = position;
        startTime = time;
    }

    private void SwipeEnd(Vector2 position, float time)
    {
        endPosition = position;
        endTime = time;

        DetectSwipe();
    }

    private void DetectSwipe()
    {
        Debug.Log(startPosition);
        Debug.Log(endPosition);
        if (Vector3.Distance(startPosition, endPosition) >= minimumDistance &&
           (endTime - startTime) <= maximumTime)
        {
            Debug.DrawLine(startPosition, endPosition, Color.red, 1.0f);
            var direction = endPosition - startPosition;
            Vector2 direction2D = new Vector2(direction.x, direction.y).normalized;
            OnSwiped(SwipeDirection(direction2D));
        }
    }

    private Vector2 SwipeDirection(Vector2 direction)
    {
        if(Vector2.Dot(Vector2.up, direction) > directionThreshold)
        {
           // Debug.Log("SwipeUp");
            return Vector2.up;
        }
        else if (Vector2.Dot(Vector2.down, direction) > directionThreshold)
        {
            //Debug.Log("SwipeDown");
            return Vector2.down;
        }
        else if (Vector2.Dot(Vector2.left, direction) > directionThreshold)
        {
            //Debug.Log("SwipeLeft");
            return Vector2.left;
        }
        else if (Vector2.Dot(Vector2.right, direction) > directionThreshold)
        {
            //Debug.Log("SwipeRight");
            return Vector2.right;

        }

        // hm try returning direction
        return new Vector2(0.0f, 0.0f);
    }
}