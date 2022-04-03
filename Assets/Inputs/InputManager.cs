using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


[DefaultExecutionOrder(-1)]
public class InputManager : Singleton<InputManager>
{

    public delegate void StartTouch(Vector2 position, float time);
    public event StartTouch OnStartTouch;
    public delegate void EndTouch(Vector2 position, float time);
    public event EndTouch OnEndTouch;

    private RunX playerControls;
    //private Camera mainCamera;

    private void Awake()
    {
        playerControls = new RunX();
    }

    private void OnEnable()
    {
        playerControls.Enable();
    }

    private void OnDisable()
    {
        playerControls.Disable();
    }

    private void Start()
    {
        playerControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx);
        playerControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx);
    }

    private void StartTouchPrimary(InputAction.CallbackContext context)
    {
        if (OnStartTouch != null) OnStartTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.startTime);
    }

    private void EndTouchPrimary(InputAction.CallbackContext context)
    {
        if (OnEndTouch != null) OnEndTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.time);
    }

    public Vector2 PrimaryPosition()
    {
        return playerControls.Touch.PrimaryPosition.ReadValue<Vector2>();
    }


    public static Vector3 ScreenToWorld(Camera camera, Vector3 pos)
    {
        pos.z = camera.nearClipPlane;
        return camera.ScreenToWorldPoint(pos);
    }
}


