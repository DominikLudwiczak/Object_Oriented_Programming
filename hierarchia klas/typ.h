#pragma once
#include "krolestwo.h"
class typ : krolestwo
{
	unsigned char nazwa_typu;

public:
	//konstruktory
	typ(unsigned char _nazwa_typu, unsigned char _nazwa_krolestwa) : krolestwo(_nazwa_krolestwa)
	{
		nazwa_typu = _nazwa_typu;
	}

	//settery
	void setNazwaTypu(unsigned char _nazwa_typu);

	//gettery
	unsigned char getNazwaTypu();
};

