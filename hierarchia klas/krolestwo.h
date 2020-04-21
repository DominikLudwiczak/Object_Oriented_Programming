#pragma once
#include "zwierze.h"
class krolestwo : zwierze
{
	unsigned char nazwa_krolestwa;
public:
	//kontsruktory
	krolestwo(unsigned char _nazwa_krolestwa)
	{
		nazwa_krolestwa = _nazwa_krolestwa;
	}

	//settery
	void setNazwaKrolestwa(unsigned char _nazwa_krolestwa);

	//gettery
	unsigned char getNazwaKrolestwa();
};

