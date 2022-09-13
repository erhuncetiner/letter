#ifndef SUBJECT_H
#define SUBJECT_H

#include "words.h"
#include <iostream>
#include <fstream>
using namespace std;
class subject : public words
{
	public:
		string reflective;
		subject();
		void subselector();
	protected:
};

#endif
