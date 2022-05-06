using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeLightColor : MonoBehaviour
{
    public static Color myColor;
    public Light targetlight;
    void OnEnable()
    {
        int randomRed = Random.Range(0,256);
        int randomGreen = Random.Range(0,256);
        int randomBlue = Random.Range(0,256);
        myColor = new Color(randomRed, randomGreen, randomBlue);
        targetlight.color = myColor;
    }

  
}
