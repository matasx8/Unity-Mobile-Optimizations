using UnityEngine;

public class PlayAudio : MonoBehaviour
{
    public GameObject audioObj;

    public void DropAudio()
    {
        Instantiate(audioObj, transform.position, transform.rotation);
    }
}
