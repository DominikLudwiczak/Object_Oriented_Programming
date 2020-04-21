/*! \file Punkt2.h
*
* \brief Zawiera deklaracj� klasy Punkt2
*
* Plik zawiera deklaracj� klasy Punkt2.h.
* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
* Klasa zawiera kilka metod skladowych
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/

#pragma once
#include <iostream>
class Punkt2
{
	double x{ 0.0 };
	double y{ 0.0 };

	public:
		static unsigned int counter;/*zmienna zliczaj�ca ilo�� obietk�w typu Punkt2*/

		Punkt2() = default;/*konstruktor domy�lny*/

		Punkt2(double _x, double _y) : x{ _x }, y{ _y }/*konstruktor niedomy�lny*/
		{
			counter++;
			std::cout << "Konstruktor niedomyslny dla Punkt2: (" << x << ", " << y << ")" << std::endl;
		}

		Punkt2(const Punkt2& copy) : x{ copy.x }, y{ copy.y }/*konstruktor kopiuj�cy*/
		{
			counter++;
			std::cout << "Konstruktor kopiujacy dla Punkt2: (" << x << ", " << y << ")" << std::endl;
		}

		Punkt2(const std::initializer_list<double>& lista)/*konstruktor z parametrem std::initializer_list*/
		{
			for (auto l : lista)
			{
				x = l;
				break;
			}

			for (auto l : lista)
			{
				y = l;
			}
			counter++;
			std::cout << "Konstruktor z parametrem std::initializer_list dla Punkt2: (" << x << ", " << y << ")" << std::endl;
		}

		~Punkt2()/*destruktor*/
		{
			std::cout << "destruktor dla klasy Punkt2" << std::endl;
		}
		//settery
		void setX(double _x);
		void setY(double _y);

		//gettery
		double getX() const;
		double getY() const;

		//wsp�rz�dne biegunowe
		double getRadius();
		double getAngle();

		//odleg�o�� punktu do punktu _p
		double getDistance(Punkt2 _p);

		//funkcja f
		Punkt2 f(Punkt2 p)
		{
			return p;
		}

		//prze�adowanie operatora '-' w klasie
		Punkt2 operator-(const Punkt2 &p) const;

		//przeladowanie operatora << w zaprzyjaznionej funkcji w klasie
		friend std::ostream& operator<<(std::ostream& os, const Punkt2& obj);

		//prze�adowanie kopiuj�cego operatora przypisania(mo�e by� tylko w klasie)
		Punkt2& operator=(const Punkt2& obj);
};

//prze�adowanie operatora iloczynu skalarnego poza klas�
double operator*(const Punkt2& p1, const Punkt2& p2);

//przeladowanie operatora << poza klasa
std::ostream& operator<<(std::ostream& os, const Punkt2& obj);