#pragma once
#include "rzad.h"
#include <iostream>
using namespace std;
class Kot : public rzad
{
	string pokrycie;
	bool ogon;
	int ilosc_nog;
	string* potomstwo;

public:
	//konstruktory
	Kot() = default;

	Kot(string _nazwa_rzadu, string _nazwa_gromady, string _nazwa_typu, string _nazwa_krolestwa, string* _potomstwo) : rzad(_nazwa_rzadu, _nazwa_gromady, _nazwa_typu, _nazwa_krolestwa)
	{
		pokrycie = "siersc";
		ogon = true;
		ilosc_nog = 4;
		potomstwo = _potomstwo;
	}

	//destruktor
	~Kot() {};

	//gettery
	virtual string getPokrycie();
	virtual bool getOgon();
	virtual int getIloscNog();
	virtual string* getPotomstwo();
};

