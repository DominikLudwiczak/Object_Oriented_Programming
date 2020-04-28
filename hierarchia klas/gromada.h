#pragma once
#include "typ.h"
#include <iostream>
using namespace std;
class gromada : public typ
{
	string nazwa_gromady;

public:
	//konstruktory
	gromada() = default;

	gromada(string _nazwa_gromady, string _nazwa_typu, string _nazwa_krolestwa) : typ(_nazwa_typu, _nazwa_krolestwa)
	{
		nazwa_gromady = _nazwa_gromady;
	}

	//settery
	void setNazwaGromady(string _nazwa_gromady);

	//gettery
	string getNazwaGromady();
};

