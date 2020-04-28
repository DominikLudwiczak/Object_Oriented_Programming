#pragma once
#include <iostream>
using namespace std;

class krolestwo : public zwierze
{
	string nazwa_krolestwa;
public:
	//kontsruktory
	krolestwo() = default;

	krolestwo(string _nazwa_krolestwa)
	{
		nazwa_krolestwa = _nazwa_krolestwa;
	}

	//settery
	void setNazwaKrolestwa(string _nazwa_krolestwa);

	//gettery
	string getNazwaKrolestwa();
};

