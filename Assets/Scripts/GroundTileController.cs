using System.Collections.Generic;
using UnityEngine;

//TODO: move collider triger along with scale of tile so we can easily change length of tile and not move the trigger every time by
//TODO: first tile should be empty to give a head start to get ready for obstacles
public class GroundTileController: MonoBehaviour
{
    GroundSpawner groundSpawner;
    [SerializeField] public List<GameObject> Obstacles;
    [SerializeField] public List<GameObject> Collectibles;
    [SerializeField] private Renderer platformRenderer;

    [Header("Obstacle Settings")]
    [SerializeField] private int numberOfObstaclesToSpawn;

    List<Vector3> Spawns;
    List<Vector3> CollectibleSpawns;
    List<byte> SpawnsForCollectibles;

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

    GameObject GetRandomObstacle()
    {
        return Obstacles[Random.Range(0, 3)];
    }

    GameObject GetRandomRangeObstacle(int exclusive)
    {
        return Obstacles[Random.Range(0, exclusive)];
    }

    void DoSpawnObstacles(List<byte> PatternForObstacles)
    {

        for (int i = 0; i < Spawns.Count; i += 3)
        {
            int numSpawnsForRow = 0;
            for (int j = 0; j < 3; j++)
            {
                numSpawnsForRow += PatternForObstacles[i + j] > 0b0 ? 1 : 0;
            }

            if (numSpawnsForRow == 3)
            {

                // lets make sure we don't get 3 regular obstacles in a row
                // regular obstacle should be nr 3
                int determinedPassableIdx = Random.Range(0, 3);
                for (int j = 0; j < 3; j++)
                {
                    if (j != determinedPassableIdx)
                        Instantiate(GetRandomObstacle(), Spawns[i + j], Quaternion.identity, transform);
                    else
                        Instantiate(GetRandomRangeObstacle(2), Spawns[i + j], Quaternion.identity, transform);
                }
            }
            else
            {
                for (int j = 0; j < 3; j++)
                {
                    if (PatternForObstacles[i + j] > 0b0)
                    {
                        Instantiate(GetRandomObstacle(), Spawns[i + j], Quaternion.identity, transform);
                    }
                }
            }
        }
    }

    void SpawnObstacles()
    {
        // get rect of platform
        // divide up into an array of spawn points depending on difficulty level
        CalcSpawnPointsForObstacles();
        // spawn obstacles
        // we get spawn grid here, e.g.:
        //      0 1 1
        //      1 1 1
        //      0 1 1
        var Pattern = GetRandomPatternForObstacles(Spawns.Count, 0xdeadbeef);
        DoSpawnObstacles(Pattern);

        CalcSpawnPointsForCollectibles(Pattern);
        DoSpawnCollectibles();



    }

    private void DoSpawnCollectibles()
    {
        for(int i = 0; i < SpawnsForCollectibles.Count; i++)
        {
            if (SpawnsForCollectibles[i] == 4)
            {
                Instantiate(Collectibles[0], CollectibleSpawns[i], Quaternion.identity, transform);
            }
        }
    }

    private void CalcSpawnPointsForCollectibles(List<byte> pattern)
    {
        var bounds = platformRenderer.bounds;
        var platformCenter = bounds.center;
        // platform rect in world coordinates
        var platformRect = new Rect(platformCenter.x - bounds.extents.x, platformCenter.z + bounds.extents.z, bounds.size.x, bounds.size.z);

        var numSpawnPoints = numberOfObstaclesToSpawn * 3;

        var TransformsForSpawns = FindTransforms(numSpawnPoints, platformRect);
        CollectibleSpawns = TransformsForSpawns;

        SpawnsForCollectibles = PopulateGridWithObstacles(pattern);
        PlaceSpawnsForCollectibles(SpawnsForCollectibles);
    }

    private void PlaceSpawnsForCollectibles(List<byte> grid)
    {
        Graph g = new Graph(grid.Count, grid.Count - 2);

        for(int i = 3; i < grid.Count; i+=3)
        {
            for(int j = 0; j < 3; j++)
            {
                for(int k = 1; k <= 3; k++)
                {
                    if (j == 0 && k == 1)
                        continue;
                    if (j == 2 && k == 3)   // lets edges between verts that are far away to the side
                        continue;

                    if ((grid[i - k] & 1) == 0 && (grid[i+j] & 1) == 0)
                        g.AddEdge(i - k, i + j);
                }
            }
        }

        g.DFS(1);
        while (g.path.Count > 0)
            grid[g.path.Pop()] |= 4;
    }

    private List<byte> PopulateGridWithObstacles(List<byte> Pattern)
    {
        int j = 6;
        int patternIdx = 0;
        List<byte> grid = new List<byte>();
        for (int i = 0; i < CollectibleSpawns.Count; i++)
        {
            if (j <= 3)
            {
                grid.Add(Pattern[patternIdx++]);
            } 
            else
                grid.Add(0);

            j--;

            if (j == 0)
                j = 9;
        }
        return grid;
    }

    // We can use this to generate something more fancy with the randomness
    // tho for now something simple
    // len - should be divisible by 3
    // seed (doesnt have to be uint) - use seed to make random generation same each play
    // dont actually need seed - remove
    List<byte> GetRandomPatternForObstacles(int len, uint seed)
    {
        List<byte> Pattern = new List<byte>();

        for (int i = 0; i < len; i += 3)
        {
            int idxForNoObstacle = Random.Range(0, 4);

            for (int j = 0; j < 3; j++)
                Pattern.Add((byte)(j != idxForNoObstacle ? 0b1 : 0b0));

            if (idxForNoObstacle == 3)
                for (int j = 0; j < 3; j++)
                    Pattern[i + j]++;
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
        int i = 0;
        foreach(var tf in CollectibleSpawns)
        {
            if((SpawnsForCollectibles[i++] & 4) > 0)
                Gizmos.DrawCube(tf, new Vector3(0.5f, 10, 0.5f));

        }
    }
}

