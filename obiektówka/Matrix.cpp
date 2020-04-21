/*! \file Matrix.cpp
*
* \brief Zawiera definicj� klasy Matrix
*
* Plik zawiera implementacj� metod klasy Matrix.
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/
#include "Matrix.h"
//prze�adowanie kopiuj�cego operatora przypisania(mo�e by� tylko w klasie)
Matrix& Matrix::operator=(const Matrix& obj)
{
	if (&obj != this)
	{
		SizeX = obj.SizeX;
		SizeY = obj.SizeY;
		tab = obj.tab;
	}
	return *this;
}

double& Matrix::operator[](const int i)
{
	return *tab[i];
}

//prze�adowanie operatora () z argumentami okre�laj�cymi indeksy danego elementu sk�adowej tab (zwraca warto�� tab[i][j])
double& Matrix::operator()(const int i, const int j) const
{
	return tab[i][j];
}