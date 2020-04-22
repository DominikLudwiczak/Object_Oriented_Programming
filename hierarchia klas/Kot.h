#pragma once
#include "rzad.h"
#include <iostream>
using namespace std;
class Kot : rzad
{
	string glos;

public:
	//konstruktory
	Kot(string _nazwa_rzadu, string _nazwa_gromady, string _nazwa_typu, string _nazwa_krolestwa) : rzad(_nazwa_rzadu, _nazwa_gromady, _nazwa_typu, _nazwa_krolestwa)
	{
		glos = "Mia³³³³³³";
	}

	//gettery
	string getGlos();
};

