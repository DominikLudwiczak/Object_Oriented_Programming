#pragma once
#include "gromada.h"
class rzad : gromada
{
	unsigned char nazwa_rzedu;

public:
	//konstruktory
	rzad(unsigned char _nazwa_rzadu, unsigned char _nazwa_gromady, unsigned char _nazwa_typu, unsigned char _nazwa_krolestwa) : gromada(_nazwa_gromady, _nazwa_typu, _nazwa_krolestwa)
	{
		nazwa_rzedu = _nazwa_rzadu;
	}

	//settery
	void setNazwaRzedu(unsigned char _nazwa_rzedu);

	//gettery
	unsigned char getNazwaRzedu();
};

