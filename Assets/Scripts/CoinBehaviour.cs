using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinBehaviour : MonoBehaviour
{
    [SerializeField] float rotSpeed;

    // Update is called once per frame
    void Update()
    {
        transform.RotateAroundLocal(Vector3.up, rotSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            Destroy(gameObject, 0.1f);
        }
    }
}
