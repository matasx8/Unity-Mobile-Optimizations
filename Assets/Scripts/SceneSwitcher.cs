using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
    public GameObject optionsScreen; 
    public void OpenScene(int index)
    {
        SceneManager.LoadScene(index);
    }

    public void CloseOptions()
    {
        optionsScreen.SetActive(false);
    }
}
