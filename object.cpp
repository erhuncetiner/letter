#include "object.h"

object::object()
{
	
//	randomgetter();
	objectselector();
}

//void object::randomgetter(){
//	srand (time(0));
//
//  /* generate secret number between 1 and 10: */
//	iSecret = rand() % 10 + 1;
//  	
//	
//}

void object::objectselector(){ 
//srand (time(0));
//iSecret = rand() % 10 + 1;
//iSecret2 = rand() % 10 + 1;
//iSecret=sqrt(iSecret*iSecret2);
//		srand (time(0));

  /* generate secret number between 1 and 10: */
	iSecret = rand() % 10 + 1;
  	
	  /* initialize random seed: */
 
////
////  /* generate secret number between 1 and 10: */
////  iSecret = rand() % 10 + 1;
////	iSecret = 5;
//iSecret = temp;
	if (iSecret == 1){
		says = "me";

	}
	else if (iSecret == 2){
		says = "you";

	}
	else if (iSecret == 3){
		says = "her";
//		if (subject.reflective = "herself"){
//			says = reflective;
//		}
	}
	else if (iSecret == 4){
		says = "him";
//		if (reflective = "himself"){
//			says = reflective;
//		}
	}
	else if (iSecret == 5){
		says = "it";
//		if (reflective = "itself"){
//			says = reflective;
//		}
	}
	else if (iSecret == 6){
		says = "us";
//		if (reflective = "ourselves"){
//			says = reflective;
//		}
	}
	else if (iSecret == 7){
		says = "them";
//		if (reflective = "themselves"){
//			says = reflective;
//		}
	}
	else if (iSecret == 8){
		says = "you";
//		if (reflective = "yourselves"){
//			says = reflective;
//		}
	}
	else if (iSecret == 9){
		says = "nobody";
	}
	else if (iSecret == 10){
		says = "everybody";
	}

}
