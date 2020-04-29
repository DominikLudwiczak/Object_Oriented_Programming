#pragma once
#include "gromada.h"
#include <iostream>
using namespace std;
class rzad : public gromada
{
	string nazwa_rzedu;

public:
	//konstruktory
	rzad() = default;

	rzad(string _nazwa_rzadu, string _nazwa_gromady, string _nazwa_typu, string _nazwa_krolestwa) : gromada(_nazwa_gromady, _nazwa_typu, _nazwa_krolestwa)
	{
		nazwa_rzedu = _nazwa_rzadu;
	}

	//destruktor
	~rzad() {};

	//settery
	void setNazwaRzedu(string _nazwa_rzedu);

	//gettery
	string getNazwaRzedu();
};

