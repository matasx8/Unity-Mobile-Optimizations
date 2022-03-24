using UnityEngine;

public class GroundTileRemove : MonoBehaviour
{
    GroundSpawner groundSpawner;
    public GameObject regularObstacle;
    public GameObject jumpObstacle;
    public GameObject slideObstacle;
    
    void Start()
    {
        groundSpawner = GameObject.FindObjectOfType<GroundSpawner>();
        SpawnObstacle();
    }
    private void OnTriggerExit(Collider other)
    {
        groundSpawner.SpawnTile();
        Destroy(gameObject, 1);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    void SpawnObstacle()
    {
        // Random point to spawn
        int obstacleSpawnIndex = Random.Range(2, 5);
        int obstacleTypeIndex = Random.Range(0, 3);
        Transform spawnPoint = transform.GetChild(obstacleSpawnIndex).transform;
        Vector3 obstaclePosition = spawnPoint.position;
        switch(obstacleTypeIndex){
            case 0:
            obstaclePosition.y += 1.5f;
                Instantiate(regularObstacle, obstaclePosition, Quaternion.identity, transform);
                break;
            case 1:
                Instantiate(jumpObstacle, obstaclePosition, Quaternion.identity, transform);
                break;
            case 2:
            obstaclePosition.y += 4;
                Instantiate(slideObstacle, obstaclePosition, Quaternion.identity, transform);
                break;
        }
        
        Debug.Log(obstacleTypeIndex);
    }
}
