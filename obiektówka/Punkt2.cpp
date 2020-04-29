/*! \file Punkt2.cpp
*
* \brief Zawiera definicjê klasy Punkt2
*
* Plik zawiera implementacjê metod klasy Punkt2.
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/

#include "Punkt2.h"
#define _USE_MATH_DEFINES
#include <cmath>

unsigned int Punkt2::counter;

void Punkt2::setX(double _x)
{
	x = _x;
}

void Punkt2::setY(double _y)
{
	y = _y;
}

double Punkt2::getX() const
{
	return x;
}

double Punkt2::getY() const
{
	return y;
}

double Punkt2::getRadius()
{
	try
	{
		double liczba = x * x + y * y;
		if (liczba < 0)
			throw MyException("Nie ma pierwiastka z liczby ujemnej", 001);
		else
			return sqrt(x * x + y * y);
	}
	catch (MyException& e)
	{
		std::cout << e.what() << "\nerr_num: " << e.getErrNum() << std::endl;
	}
}

double Punkt2::getAngle()
{
		return atan2(x, y) * 180 / 3.14;
}

double Punkt2::getDistance(Punkt2 _p)
{
	try
	{
		double x2 = _p.getX();
		double y2 = _p.getY();

		double liczba = (x - x2) * (x - x2) + (y - y2) * (y - y2);
		if (liczba < 0)
			throw "Nie ma pierwiastka z liczby ujemnej!";
		else
			return sqrt(liczba);
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}
}

Punkt2 Punkt2::operator-(const Punkt2 &p2) const
{
	return Punkt2(x - p2.getX(), y - p2.getY());
}

double operator*(const Punkt2& p1, const Punkt2& p2)
{
	return ((p1.getX() * p2.getX()) + (p1.getY() * p2.getY()));
}

std::ostream& operator<<(std::ostream& os, const Punkt2& obj)
{
	return os << "( " << obj.getX() << ", " << obj.getY() << " )";
}

Punkt2& Punkt2::operator=(const Punkt2& obj)
{
	if (&obj != this)
	{
		x = obj.x;
		y = obj.y;
	}
	return *this;
}