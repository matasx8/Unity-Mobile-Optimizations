using UnityEngine;

public class GroundSpawner : MonoBehaviour
{
    public GameObject groundTile;
    public int tileNumber;
    Vector3 nextGroundSpawnPoint;
    
    public void SpawnTile()
    {
        GameObject temp = Instantiate(groundTile, nextGroundSpawnPoint, Quaternion.identity);
        nextGroundSpawnPoint = temp.transform.GetChild(1).transform.position;
    }
    private void Start()
    {
        for(int i = 0; i < tileNumber; i++)
            SpawnTile();
    }
    
}
