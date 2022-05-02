using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinBehaviour : MonoBehaviour
{
    [SerializeField] float rotSpeed;
    private GroundSpawner groundSpawner;

    private void Start()
    {
        groundSpawner = GameObject.FindObjectOfType<GroundSpawner>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.RotateAroundLocal(Vector3.up, rotSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            groundSpawner.ReleaseCoin(gameObject);
        }
    }
}
