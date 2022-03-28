using System.Collections.Generic;
using UnityEngine;

public class GroundTileController: MonoBehaviour
{
    GroundSpawner groundSpawner;
    [SerializeField] public List<GameObject> Obstacles;
    [SerializeField] private Renderer platformRenderer;

    [Header("Obstacle Settings")]
    [Range(0.0f, 1f)]
    [SerializeField] private float difficulty;

    void Start()
    {
        groundSpawner = GameObject.FindObjectOfType<GroundSpawner>();
        SpawnObstacles();
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
    
    void SpawnObstacles()
    {
        // get rect of platform
        // divide up into an array of spawn points depending on difficulty level
        GetSpawnPointsForObstacles();
        // spawn obstacles

        // Random point to spawn
        int obstacleSpawnIndex = Random.Range(2, 5);
        int obstacleTypeIndex = Random.Range(0, 3);
        Transform spawnPoint = transform.GetChild(obstacleSpawnIndex).transform;
        Vector3 obstaclePosition = spawnPoint.position;
        /*switch(obstacleTypeIndex){
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
        }*/
        
        Debug.Log(obstacleTypeIndex);
    }

    void GetSpawnPointsForObstacles()
    {
        var bounds = platformRenderer.bounds;
        var platformCenter = bounds.center;
        // platform rect in world coordinates
        var platformRect = new Rect(platformCenter.x - bounds.extents.x, platformCenter.z + bounds.extents.z, bounds.size.x, bounds.size.z);

        var numSpawnPoints = 6; //GetNumSpawnPointsFromDifficulty();

        var TransformsForSpawns = FindTransforms(numSpawnPoints, platformRect);

    }

    // numSpawnPoints should be divisible by NUM_LANES_BETWEEN_SECTIONS
    List<Transform> FindTransforms(int numSpawnPoints, Rect platformRect)
    {
        List<Transform> transforms = new List<Transform>(numSpawnPoints);

        int NUM_SECTIONS = 4;
        int NUM_LANES_BETWEEN_SECTIONS = 3;

        float widthStep = platformRect.width / NUM_SECTIONS;
        float lengthStep = platformRect.height / numSpawnPoints / NUM_LANES_BETWEEN_SECTIONS;

        for(int i = 0; i < numSpawnPoints / NUM_LANES_BETWEEN_SECTIONS; i++)
        {
            // finish here

        }

        return transforms;
    }
}
