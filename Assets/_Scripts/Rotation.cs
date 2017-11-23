using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour {


	void OnTouchStay () {


		transform.Rotate (0.3f,1.5f,0.3f);

	}
}
