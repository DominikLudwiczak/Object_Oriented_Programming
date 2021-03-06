/*! \file Matrix.cpp
*
* \brief Zawiera definicję klasy Matrix
*
* Plik zawiera implementację metod klasy Matrix.
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/
#include "Matrix.h"
//przeładowanie kopiującego operatora przypisania(może być tylko w klasie)
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

//przeładowanie operatora () z argumentami określającymi indeksy danego elementu składowej tab (zwraca wartość tab[i][j])
double& Matrix::operator()(const int i, const int j) const
{
	return tab[i][j];
}