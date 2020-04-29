#include <iostream>
#include "zwierze.h"
#include "Kot.h"
#include "Pies.h"
using namespace std;

int main()
{
	string* potomstwoKot = new string[2];
	potomstwoKot[0] = "Bonifacy";
	potomstwoKot[1] = "Ciapek";
	Kot kot = Kot("rzad_kot","gromada_kot","typ_kot","krolestwo_kot", potomstwoKot);

	string* potomstwoPies = new string[2];
	potomstwoPies[0] = "Burek";
	potomstwoPies[1] = "Kundelek";
	Pies pies = Pies("rzad", "gromada", "typ", "krolestwo", potomstwoPies);

	zwierze* zwierze = &pies;
	bool ogon = zwierze->getOgon();
	if (ogon == true)
		cout << "Ma ogon" << endl;
	else
		cout << "Nie ma ogonu" << endl;
	return 0;
}