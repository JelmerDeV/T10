using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class FlashingText : MonoBehaviour {

	[SerializeField]TextMesh flashingText;

	private bool flash;

	void Start(){
		CubeController.startDelegate += CancelFlash;
		flashingText.text = "TOUCH CUBE TO BEGIN";
		flash = true;

		//flashingText = GetComponent<Text>();

		StartCoroutine(BlinkText());

	}

	//function to blink the text 
	public IEnumerator BlinkText(){
		
		while(flash){

			flashingText.text= " ";
			yield return new WaitForSeconds(.5f);
			if (flash) {
				flashingText.text = "TOUCH CUBE TO BEGIN";
				yield return new WaitForSeconds (.5f);
			}
		}
	}

	void CancelFlash(){
		
		flash = false;

		flashingText.text= "";
		CubeController.startDelegate -= CancelFlash;
	}

}