#include <iostream>
#include "zwierze.h"
#include "Kot.h"
#include "Pies.h"
using namespace std;

int main()
{
	Kot kot=Kot("rzad_kot","gromada_kot","typ_kot","krolestwo_kot");
	Pies pies = Pies("rzad", "gromada", "typ", "krolestwo");

	zwierze* zwierze;
	zwierze = &kot;
	return 0;
}