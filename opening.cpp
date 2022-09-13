#include "opening.h"

opening::opening()
{	
	adr();
	tit();
	cout << "\t" << adress << " " << title << "," << endl << endl;
}

void opening::adr(){
	adrand = rand() % 10 + 1;
	
	if (adrand == 1){
		adress = "Dear";
	}
	else if (adrand == 2){
		adress = "Beloved";
	}
	else if (adrand == 3){
		adress = "Respected";
	}
	else if (adrand == 4){
		adress = "Extinguished";
	}
	else if (adrand == 5){
		adress = "Magnificent";
	}
	else if (adrand == 6){
		adress = "Professional";
	}
	else if (adrand == 7){
		adress = "Disgusting";
	}
	else if (adrand == 8){
		adress = "Despicable";
	}
	else if (adrand == 9){
		adress = "Detestable";
	}
	else if (adrand == 10){
		adress = "Notorious";
	}
	
}

void opening::tit(){
	tirand = rand() % 10 + 1;
	
	if (tirand == 1){
		title = "Professor";
	}
	else if (tirand == 2){
		title = "Lord";
	}
	else if (tirand == 3){
		title = "Oppresor";
	}
	else if (tirand == 4){
		title = "Friend";
	}
	else if (tirand == 5){
		title = "Foe";
	}
	else if (tirand == 6){
		title = "Mentor";
	}
	else if (tirand == 7){
		title = "Cousin";
	}
	else if (tirand == 8){
		title = "Boss";
	}
	else if (tirand == 9){
		title = "President";
	}
	else if (tirand == 10){
		title = "Employee";
	}
}
