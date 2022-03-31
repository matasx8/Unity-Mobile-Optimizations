using UnityEngine;

public class GroundSpawner : MonoBehaviour
{
    public GameObject groundTile;
    public int tileNumber;
    Vector3 nextGroundSpawnPoint;
    
    public void SpawnTile()
    {
        GameObject temp = Instantiate(groundTile, nextGroundSpawnPoint, Quaternion.identity);
        // should do something safer than this.
        // will be hard to expand when getting new spawn point is so hard coded kind of
        nextGroundSpawnPoint += new Vector3(0.0f, 0.0f, temp.transform.GetChild(0).GetComponent<Renderer>().bounds.size.z);
    }
    private void Start()
    {
        for(int i = 0; i < tileNumber; i++)
            SpawnTile();
    }
    
}
