using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RestartController : MonoBehaviour {

	private bool gameOver;
	private float restartTimer;
	[SerializeField]private GameObject restartButton;


	void Start () {
		//restartButton = GameObject.FindGameObjectWithTag ("restart");
		TimerScript.gameOverDelegate += GameOver;
		gameOver = false;
		restartTimer = 1.0f;
	}
	
	void FixedUpdate(){
		//Debug.Log (restartTimer);
		if (gameOver && restartTimer > 0) {
			restartTimer -= 1 * Time.fixedDeltaTime;
		}else if(restartTimer < 0){
			restartTimer = 0;

			restartButton.SetActive (true);
		}
	}

	void GameOver(){
		gameOver = true;

	
	}


}
