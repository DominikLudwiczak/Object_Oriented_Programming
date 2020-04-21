#pragma once
#include "typ.h"
class gromada : typ
{
	unsigned char nazwa_gromady;

public:
	//konstruktory
	gromada(unsigned char _nazwa_gromady, unsigned char _nazwa_typu, unsigned char _nazwa_krolestwa) : typ(_nazwa_typu, _nazwa_krolestwa)
	{
		nazwa_gromady = _nazwa_gromady;
	}

	//settery
	void setNazwaGromady(unsigned char _nazwa_gromady);

	//gettery
	unsigned char getNazwaGromady();
};

