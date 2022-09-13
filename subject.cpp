#include "subject.h"

subject::subject()
{
	subselector();
}

void subject::subselector(){
//srand (time(0));
//iSecret = rand() % 10 + 1;
  /* generate secret number between 1 and 10: */
//	iSecret = rand() % 10 + 1;
  	
	  /* initialize random seed: */
//  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 8 + 1;
////	iSecret = 5;
//iSecret = temp;
	if (iSecret == 1){
		says = "i";
		reflective = "myself";
	}
	else if (iSecret == 2){
		says = "you";
		reflective = "yourself";
	}
	else if (iSecret == 3){
		says = "she";
		reflective = "herself";
	}
	else if (iSecret == 4){
		says = "he";
		reflective = "himself";
	}
	else if (iSecret == 5){
		says = "it";
		reflective = "itself";
	}
	else if (iSecret == 6){
		says = "they";
		reflective = "themselves";
	}
	else if (iSecret == 7){
		says = "you";
		reflective = "yourselves";
	}
	else if (iSecret == 8){
		says = "we";
		reflective = "ourselves";
	}
//	else if (iSecret == 9){
//		says = "you";
//	}
//	else if (iSecret == 10){
//		says = "they";
//	}
}
