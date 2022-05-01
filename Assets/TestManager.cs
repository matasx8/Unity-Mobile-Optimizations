using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public class TestManager : Singleton<TestManager>
{
    public bool testmode = false;
    public void OnTestButtonClick()
    {
        testmode = !testmode;
        Physics.IgnoreLayerCollision(8, 9, testmode);
    }
}
