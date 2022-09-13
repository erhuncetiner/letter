#include "verbs.h"

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include <math.h>
verbs::verbs()
{
//	int temp;
//  int iSecret, iGuess;
	
//	says = "0";
//	randomgetter();
//pastTense = false;
	verbselector();
	bool pastTense = false;
//	randomgetter();
//	verbselector();
//	iSecret = 0;
//	says = "saw";
	
}

//void verbs::randomgetter(){
//	srand (time(0));
//
//  /* generate secret number between 1 and 10: */
//	iSecret = rand() % 10 + 1;
//  	
//	
//}
void verbs::verbselector(){
//srand (time(0));
//iSecret = rand() % 10 + 1;
  /* generate secret number between 1 and 10: */
//	iSecret = rand() % 10 + 1;
  	
	  /* initialize random seed: */
//  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;
////	iSecret = 5;
//iSecret = temp;

if (pastTense = 1){

	if (iSecret == 1){
		says = "saw";
	}
	else if (iSecret == 2){
		says = "noticed";
	}
	else if (iSecret == 3){
		says = "killed";
	}
	else if (iSecret == 4){
		says = "warned";
	}
	else if (iSecret == 5){
		says = "scared";
	}
	else if (iSecret == 6){
		says = "pushed";
	}
	else if (iSecret == 7){
		says = "scammed";
	}
	else if (iSecret == 8){
		says = "loved";
	}
	else if (iSecret == 9){
		says = "hated";
	}
	else if (iSecret == 10){
		says = "impressed";
	}
}
else if (pastTense = 0){
	
	if (iSecret == 1){
		says = "see";
	}
	else if (iSecret == 2){
		says = "notice";
	}
	else if (iSecret == 3){
		says = "kill";
	}
	else if (iSecret == 4){
		says = "warn";
	}
	else if (iSecret == 5){
		says = "scare";
	}
	else if (iSecret == 6){
		says = "push";
	}
	else if (iSecret == 7){
		says = "scam";
	}
	else if (iSecret == 8){
		says = "love";
	}
	else if (iSecret == 9){
		says = "hate";
	}
	else if (iSecret == 10){
		says = "impress";
	}	
}
//		srand (time(NULL));

  /* generate secret number between 1 and 10: */
//	iSecret = rand() % 10 + 1;
  	
//	iSecret = 0;
	
}


