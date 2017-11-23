using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Restart : MonoBehaviour {

	void OnTouchDown(){
		Application.LoadLevel (Application.loadedLevel);
	}
}
