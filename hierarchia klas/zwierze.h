#pragma once
#include <iostream>

class zwierze
{
public:
	virtual std::string getPokrycie() = 0;
	virtual bool getOgon() = 0;
	virtual int getIloscNog() = 0;
	virtual std::string* getPotomstwo() = 0;
};