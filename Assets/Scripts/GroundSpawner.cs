using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class GroundSpawner : MonoBehaviour
{
    [SerializeField] public List<GameObject> Obstacles;
    [SerializeField] public GameObject Coin;
    public GameObject groundTile;
    public int tileNumber;
    Vector3 nextGroundSpawnPoint;

    private IObjectPool<GameObject> TilePool;
    private IObjectPool<GameObject> CoinPool;
    private List<IObjectPool<GameObject>> ObstaclePools;

    private int numItemsCreated = 0;
    
    public void SpawnTile()
    {
        GameObject temp = TilePool.Get();
        temp.transform.position = nextGroundSpawnPoint;
        // should do something safer than this.
        // will be hard to expand when getting new spawn point is so hard coded kind of
        nextGroundSpawnPoint += new Vector3(0.0f, 0.0f, temp.transform.GetChild(0).GetComponent<Renderer>().bounds.size.z);
        var script = temp.GetComponent<GroundTileController>();
        script.SpawnObstaclesAndCollectibles();
    }
    private void Start()
    {
        TilePool = new ObjectPool<GameObject>(CreatePooledItem, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject);
        CoinPool = new ObjectPool<GameObject>(CreateCoinPooledItem, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject, false);
        ObstaclePools = new List<IObjectPool<GameObject>>();

        
        ObstaclePools.Add(new ObjectPool<GameObject>(() => {numItemsCreated++; return Instantiate(Obstacles[0]); }, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject));
        ObstaclePools.Add(new ObjectPool<GameObject>(() => { numItemsCreated++; return Instantiate(Obstacles[1]); }, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject));
        ObstaclePools.Add(new ObjectPool<GameObject>(() => { numItemsCreated++; return Instantiate(Obstacles[2]); }, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject));

        for (int i = 0; i < tileNumber; i++)
            SpawnTile();
    }

    GameObject CreatePooledItem()
    {
        numItemsCreated++;
        return Instantiate(groundTile, nextGroundSpawnPoint, Quaternion.identity);
    }

    GameObject CreateCoinPooledItem()
    {
        numItemsCreated++;
        return Instantiate(Coin);
    }

    // Called when an item is returned to the pool using Release
    void OnReturnedToPool(GameObject go)
    {
        go.SetActive(false);
    }

    // Called when an item is taken from the pool using Get
    void OnTakeFromPool(GameObject go)
    {
        go.SetActive(true);
    }

    // If the pool capacity is reached then any items returned will be destroyed.
    // We can control what the destroy behavior does, here we destroy the GameObject.
    void OnDestroyPoolObject(GameObject go)
    {
        Destroy(go);
    }

    public void ReleaseTile(GameObject go)
    {
        TilePool.Release(go);
    }
    
    public GameObject GetObstacle(int idx)
    {
        return ObstaclePools[idx].Get();
    }

    public GameObject GetCoin()
    {
        return CoinPool.Get();
    }

    public void ReleaseCoin(GameObject go)
    {
        CoinPool.Release(go);
    }

    public void ReleaseObstacle(int idx, GameObject go)
    {
        ObstaclePools[idx].Release(go);
    }

#if DEBUG
    private void Update()
    {
        Debug.Log("Total items created now: " + numItemsCreated.ToString());
    }
#endif
}
