using UnityEngine;
using TMPro;
public class Score : MonoBehaviour
{
    public Transform player;
    public TextMeshProUGUI scoreText;
    public int zOffset;
    // Update is called once per frame
    void Update()
    {
        int currentScore = (int)player.position.z + zOffset;
        scoreText.text = "Score: " + currentScore;
    }
}
