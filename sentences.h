#ifndef SENTENCES_H
#define SENTENCES_H

#include "verbs.h"
#include "object.h"
#include "subject.h"
#include <iostream>
#include <fstream>
using namespace std;
class sentences
{
	public:
		subject sub;
		verbs verb;
		object obj;
		string pronounce;
		int connected;
		sentences();
		virtual void outloud();
	protected:
};

#endif
