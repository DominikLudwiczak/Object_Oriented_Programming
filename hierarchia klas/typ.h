#pragma once
#include "krolestwo.h"
#include <iostream>
using namespace std;
class typ : public krolestwo
{
	string nazwa_typu;

public:
	//konstruktory
	typ() = default;

	typ(string _nazwa_typu, string _nazwa_krolestwa) : krolestwo(_nazwa_krolestwa)
	{
		nazwa_typu = _nazwa_typu;
	}

	//settery
	void setNazwaTypu(string _nazwa_typu);

	//gettery
	string getNazwaTypu();
};

