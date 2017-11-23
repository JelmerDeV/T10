using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour {
	private float timer;
	private bool startTime;
	//private float restartTimer;
	private byte redValue;


	[SerializeField]private Image timeClock;
	[SerializeField]bool gameOver = false;

	public delegate void GameOverDelegate ();
	public static GameOverDelegate gameOverDelegate;

	void Start () {
		redValue = 1;
		startTime = false;

		CubeController.startDelegate += TimerStart;
		timer = 10.0f;

	}



	void FixedUpdate () {
		if(startTime)
		ChangeTime ();
		//Debug.Log (timer);
	}

	private void ChangeTime(){
		timeClock.fillAmount = timer / 10;
		//Debug.Log (timeClock.color.r);
		if (timer > 0) {
			timeClock.color = new Color32(redValue,0,0,100);
			ChangeColor ();
			

			timer -= 1 * Time.fixedDeltaTime;

		} else {
			
			timer = 0;

			gameOverDelegate ();
		}


		
	}

	private void TimerStart(){
		startTime = true;
		CubeController.startDelegate -= TimerStart;
	}

	private void ChangeColor(){
		if (timer < 5) {
			if (redValue < 250)
				redValue += 1;
		}
	}
}
