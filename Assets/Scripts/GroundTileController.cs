using System.Collections.Generic;
using UnityEngine;

//TODO: move collider triger along with scale of tile so we can easily change length of tile and not move the trigger every time by
//TODO: first tile should be empty to give a head start to get ready for obstacles
public class GroundTileController: MonoBehaviour
{
    GroundSpawner groundSpawner;
    [SerializeField] public List<GameObject> Obstacles;
    [SerializeField] private Renderer platformRenderer;

    [Header("Obstacle Settings")]
    [SerializeField] private int numberOfObstaclesToSpawn;

    List<Vector3> Spawns;

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

    GameObject GetRandomObstacle()
    {
        return Obstacles[Random.Range(0, 3)];
    }


    void SpawnObstacles()
    {
        // get rect of platform
        // divide up into an array of spawn points depending on difficulty level
        CalcSpawnPointsForObstacles();
        // spawn obstacles
        var PatternForObstacles = GetRandomPatternForObstacles(Spawns.Count, 0xdeadbeef);

        for(int i = 0; i < Spawns.Count; i++)
        {
            if(PatternForObstacles[i])
            {
                Instantiate(GetRandomObstacle(), Spawns[i], Quaternion.identity, transform);
            }

        }
    }

    // We can use this to generate something more fancy with the randomness
    // tho for now something simple
    // len - should be divisible by 3
    // seed (doesnt have to be uint) - use seed to make random generation same each play
    // dont actually need seed - remove
    // TODO: Improve this pls. Like currently I spawn two obstacles every row, maybe spawn 1-2
    List<bool> GetRandomPatternForObstacles(int len, uint seed)
    {
        List<bool> Pattern = new List<bool>();

        for (int i = 0; i < len; i += 3)
        {
            int idxForNoObstacle = Random.Range(0, 3);

            for(int j = 0; j < 3; j++)
                Pattern.Add(j != idxForNoObstacle);

        }

        return Pattern;
    }

    void CalcSpawnPointsForObstacles()
    {
        var bounds = platformRenderer.bounds;
        var platformCenter = bounds.center;
        // platform rect in world coordinates
        var platformRect = new Rect(platformCenter.x - bounds.extents.x, platformCenter.z + bounds.extents.z, bounds.size.x, bounds.size.z);

        var numSpawnPoints = numberOfObstaclesToSpawn;

        var TransformsForSpawns = FindTransforms(numSpawnPoints, platformRect);
        Spawns = TransformsForSpawns;

    }

    // numSpawnPoints should be divisible by NUM_LANES_BETWEEN_SECTIONS
    List<Vector3> FindTransforms(int numSpawnPoints, Rect platformRect)
    {
        List<Vector3> Positions = new List<Vector3>();

        int NUM_SECTIONS = 4;
        int NUM_LANES_BETWEEN_SECTIONS = 3;

        float widthStep = platformRect.width / NUM_LANES_BETWEEN_SECTIONS;
        // this below should be an odd number probably, since if 
        int numSectionsBetweenRows = (numSpawnPoints) / NUM_LANES_BETWEEN_SECTIONS;
        float lengthStep = platformRect.height / numSectionsBetweenRows;

        for(int i = 1; i <= numSectionsBetweenRows; i++)
        {
            for(int j = 1; j < NUM_SECTIONS; j++)
            {
                var offsetForSpawnPoint = new Vector3(platformRect.x - widthStep / 2, 0.0f, platformRect.y + lengthStep / 2);
                offsetForSpawnPoint += new Vector3(widthStep * j, 0.0f, -lengthStep * i);

                Vector3 spawn = offsetForSpawnPoint + transform.position;

                Positions.Add(spawn);
            }



        }

        return Positions;
    }

    private void OnDrawGizmos()
    {
        foreach(var tf in Spawns)
        {
        Gizmos.DrawCube(tf, new Vector3(0.5f, 10, 0.5f));

        }
    }
}
