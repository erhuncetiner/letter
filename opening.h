#ifndef OPENING_H
#define OPENING_H

#include "words.h"

class opening : public words
{
	public:
		opening();
		string adress;
		int adrand;
		string title;
		int tirand;
		void adr();
		void tit();
	protected:
};

#endif
