#include "closing.h"

closing::closing()
{
	clo();
	cout << endl << endl << "\t" << closer << "," << endl << "\t";
}

void closing::clo(){
	cl = rand() % 10 + 1;
	
	if (cl == 1){
		closer = "Signed";
	}
	else if (cl == 2){
		closer = "Respectfully";
	}
	else if (cl == 3){
		closer = "With my regards";
	}
	else if (cl == 4){
		closer = "Kind regards";
	}
	else if (cl == 5){
		closer = "Best";
	}
	else if (cl == 6){
		closer = "Sincerely";
	}
	else if (cl == 7){
		closer = "Thank you";
	}
	else if (cl == 8){
		closer = "Yours truly";
	}
	else if (cl == 9){
		closer = "Cheers";
	}
	else if (cl == 10){
		closer = "Yours sincerely";
	}

}
