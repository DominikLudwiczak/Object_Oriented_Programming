/*! \file polygon.h
*
* \brief Zawiera deklaracjê klasy polygon
*
* Plik zawiera deklaracjê klasy polygon.h.
* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
* Klasa zawiera kilka metod skladowych
*
* \author Dominik Ludwiczak
* \date 2020.02.24
* \version 1.00.00
*/

#include "polygon.h"

unsigned int polygon::counter;

double polygon::GetTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3)
{
	double AB[2];
	AB[0] = p1.getX() - p2.getX();
	AB[1] = p1.getY() - p2.getY();

	double AC[2];
	AC[0] = p1.getX() - p3.getX();
	AC[1] = p1.getY() - p3.getY();

	double d = AB[0] * AC[1] - AB[1] * AC[0];
	return 0.5 * abs(d);
}

void polygon::setVertices(Punkt2* _vertices, int _count)
{
	vertices = _vertices;
	setCount(_count);
}

void polygon::changeVertex(int i, double x, double y)
{
	Punkt2 change = Punkt2(x, y);
	vertices[i] = change;
}

void polygon::setCount(int n)
{
	count = n;
}

double polygon::getPerimeter()
{
	double perimeter = 0;

	for (int i = 0; i < count; i++)
	{
		if(i==0)
			perimeter += vertices[i].getDistance(vertices[count - 1]);
		perimeter += vertices[i].getDistance(vertices[i + 1]);
	}

	return perimeter;
}

int polygon::getCount()
{
	return count;
}

double polygon::getConvexArea()
{
	double area = 0;

	for (int i = 2; i < count; i+=2)
	{
		area += GetTriangleArea(vertices[0], vertices[i], vertices[i-1]);
	}
	return area;
}

std::ostream& operator<<(std::ostream& os, const polygon& obj)
{
	os << "( ";
	for (int i = 0; i < obj.count; i++)
	{
		os << obj.vertices[i];
	}
	return os << " )";
}

polygon& polygon::operator=(const polygon& obj)
{
	if (&obj != this)
	{
		count = obj.count;
		vertices = new Punkt2[count];
		for (int i = 0; i < count; i++)
		{
			vertices[i].setX(obj.vertices[i].getX());
			vertices[i].setY(obj.vertices[i].getY());
		}
	}
	return *this;
}

Punkt2& polygon::operator[](int i)
{
	return vertices[i];
}

polygon& polygon::operator=(const polygon&& p)
{
	if (&p != this)
	{
		count = p.count;
		vertices = new Punkt2[count];
		vertices = p.vertices;
	}
	delete[] p.vertices;
	delete &p.count;
	std::cout << "przenoszacy operator przypisania dla polygon" << std::endl;
	return *this;
}