/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>

#include "opening.h"
#include "paragraph.h"
#include "closing.h"
using namespace std;
string name = "Erhun Cetiner";
int main ()
{
//int scount;	
	  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  int scount = rand() % 10 + 1;
  int lmao = rand() % 10 + 1;
  
	opening();
for (int i=0; i < scount; i++){

	paragraph storyBegin;
//	paragraph storyCont;
//	paragraph demand;
}
	closing();
	cout << name;
	return 0;
}
