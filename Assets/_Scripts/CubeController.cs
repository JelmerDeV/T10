using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CubeController : MonoBehaviour {
	[SerializeField]private bool gameOver;
	private int score;
	private int highScore;
	private float restartTimer;


	public delegate void StartDelegate ();
	public static StartDelegate startDelegate;

	[SerializeField]private TextMesh highScoreText;



	void Start(){
		
		highScore = PlayerPrefs.GetInt("highScore");

		//highScoreText.text = "Highscore:  " + highScore.ToString ();
		//Debug.Log (highScore);
		restartTimer = 2.0f;
		score = 0;
		GetComponentInChildren<TextMesh>().text = score.ToString();
		TimerScript.gameOverDelegate += GameOver;
		gameOver = false;
		transform.position = Camera.main.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, 10.0f));

	}



	void ChangePos(){


		transform.position = Camera.main.ViewportToWorldPoint(new Vector3(Random.Range (0.2f, 0.8f), Random.Range (0.2f, 0.7f), 10.0f));

	}

	void OnTouchDown(){
		if (score < 1) {
			Debug.Log (startDelegate.GetInvocationList().Length);
			startDelegate ();

		}


		if (!gameOver) {
			score += 1;
			GetComponentInChildren<TextMesh> ().text = score.ToString ();
			SetHighScore ();
			ChangePos ();
		}
	}

	void SetHighScore(){
		if(score < 2)
		highScoreText.text = "Highscore:  " + highScore.ToString ();
		
		if (score > highScore) {
			highScore = score;
			highScoreText.text = "Highscore:  " + highScore.ToString ();
			PlayerPrefs.SetInt("highScore", highScore);
			PlayerPrefs.Save ();
		}
	}

	void GameOver(){
		gameOver = true;
	}
}
