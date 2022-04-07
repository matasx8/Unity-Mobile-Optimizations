using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;
public class GameOverUI : MonoBehaviour
{
    public void GetGameOver()
    {
        gameObject.SetActive(true);
    }
    public void RestartButton()
    {
        Debug.Log("clicked batton");
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void ExitButton()
    {
        //SceneManager.LoadScene("MainMenu");
    }
}
