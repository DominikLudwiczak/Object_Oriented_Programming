/*! \file Matrix.h
*
* \brief Zawiera deklaracjê klasy Matrix
*
* Plik zawiera deklaracjê klasy Matrix.h.
* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
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
		Matrix() = default;/*konstruktor domyœlny*/

		Matrix(double** _tab, int _SizeX, int _SizeY) : SizeX{ _SizeX }, SizeY{ _SizeY }/*konstruktor niedomyœlny*/
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

		//prze³adowanie kopiuj¹cego operatora przypisania(mo¿e byæ tylko w klasie)
		Matrix& operator=(const Matrix& obj);

		//prze³adowanie operatora indeksowania
		double& operator[](const int i);

		//prze³adowanie operatora () z argumentami okreœlaj¹cymi indeksy danego elementu sk³adowej tab (zwraca wartoœæ tab[i][j])
		double& operator()(const int i, const int j)const;
};

