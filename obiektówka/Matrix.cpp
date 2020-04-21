/*! \file Matrix.cpp
*
* \brief Zawiera definicjê klasy Matrix
*
* Plik zawiera implementacjê metod klasy Matrix.
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/
#include "Matrix.h"
//prze³adowanie kopiuj¹cego operatora przypisania(mo¿e byæ tylko w klasie)
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

//prze³adowanie operatora () z argumentami okreœlaj¹cymi indeksy danego elementu sk³adowej tab (zwraca wartoœæ tab[i][j])
double& Matrix::operator()(const int i, const int j) const
{
	return tab[i][j];
}