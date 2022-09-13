#ifndef VERBS_H
#define VERBS_H

#include "words.h"
#include <iostream>
#include <fstream>
using namespace std;
class verbs : public words
{
	public:
//		int iSecret;
//		int temp;
		verbs();
		void verbselector();
		void randomgetter();
		bool pastTense;
//		~verbs();
	protected:
};

#endif
