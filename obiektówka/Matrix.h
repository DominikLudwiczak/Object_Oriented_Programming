/*! \file Matrix.h
*
* \brief Zawiera deklaracj� klasy Matrix
*
* Plik zawiera deklaracj� klasy Matrix.h.
* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
* Klasa zawiera kilka metod skladowych
*
* \author Dominik Ludwiczak
* \date 2020.03.24
* \version 1.00.00
*/
#pragma once
#include <iostream>
class Matrix
{
	double** tab;
	int SizeX;
	int SizeY;

	public:
		Matrix() = default;/*konstruktor domy�lny*/

		Matrix(double** _tab, int _SizeX, int _SizeY) : SizeX{ _SizeX }, SizeY{ _SizeY }/*konstruktor niedomy�lny*/
		{
			tab = new double*[SizeX];
			for (int i = 0; i < SizeX; i++)
			{
				tab[i] = new double[SizeY];
				for (int j = 0; j < SizeY; j++)
					tab[i][j] = _tab[i][j];
			}
			std::cout << "Konstruktor niedomyslny dla Matrix: (" << SizeX << ", " << SizeY << ")" << std::endl;
		}

		//prze�adowanie kopiuj�cego operatora przypisania(mo�e by� tylko w klasie)
		Matrix& operator=(const Matrix& obj);

		//prze�adowanie operatora indeksowania
		double& operator[](const int i);

		//prze�adowanie operatora () z argumentami okre�laj�cymi indeksy danego elementu sk�adowej tab (zwraca warto�� tab[i][j])
		double& operator()(const int i, const int j)const;
};

