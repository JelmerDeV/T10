using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AspRatioCheck : MonoBehaviour {


	void Start () {
		if (Camera.main.aspect == 0.5625f)
		{
			Debug.Log("9:16");

		}
		else if (Camera.main.aspect == 1.5f)
		{
			Debug.Log("3:2");
		}
		else if (Camera.main.aspect > 1.33f && Camera.main.aspect < 1.34f)
		{
			Debug.Log("4:3");
		}
	}
	

}
