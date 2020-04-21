#include <iostream>
#include "zwierze.h"
#include "Kot.h"
#include "Pies.h"


using namespace std;

int main()
{
	Kot kot;
	Pies pies;

	zwierze* zwierze;
	zwierze = &kot;
	return 0;
}