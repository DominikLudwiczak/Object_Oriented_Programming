//plik main.cpp

/*! \file main.cpp
*
* \brief Kod programu testuj¹cego klasê Punkt2
*
* Plik zawiera funkcjê main(),
* w której wykonano kilka podstawowych testów
* dotycz¹cych klasy Punkt2
*
* \author Dominik Ludwiczak
* \date 2020.02.17
* \version 1.00.00
*/

#include <iostream>
#include "Punkt2.h"
#include "polygon.h"
#include "MapPoint.h"

int main()
{
	/*
	Punkt2 p1 = Punkt2(10.0, 20.5);

	Punkt2 p2 = Punkt2(11.0, 60.7);


	std::cout << "Odleglosc pomiedzy p1 i p2 jest rowna: " << p1.getDistance(p2) << std::endl;
	std::cout << "Dlugosc odcinka pomiedzy punktem O, a p1 jest rowna: " << p1.getRadius() << std::endl;
	std::cout << "Kat pomiedzy osia X, a punktem p1 jest rowny: " << p1.getAngle() << std::endl;

	Punkt2 a = Punkt2(3.0, 5.0);

	Punkt2 b = Punkt2(8.0, 3.2);

	Punkt2 c = Punkt2(6.0, -2.0);

	Punkt2 d = Punkt2(4.0, 1.0);

	Punkt2* vertices = new Punkt2[4]{ a,b,c,d };

	polygon shape = polygon(vertices, 4);

	shape.changeVertex(2, 7.5, 3.5);
	std::cout << "Obwod figury jest rowny: " << shape.getPerimeter() << std::endl;
	std::cout << "pole wielokata wypuklego jest rowne: " << shape.getConvexArea() << std::endl;
	std::cout << "ilosc obiektow Punkt2: " << p1.counter << std::endl;
	std::cout << "ilosc obiektow polygon: " << shape.counter << std::endl;

	Punkt2 test = a - b;

	double test1 = a * b;

	polygon test2{ shape };

	Punkt2 test_copy{ test };

	std::cout << "Obwod figury test2 jest rowny: " << test2.getPerimeter() << std::endl;
	std::cout << shape << std::endl;

	Punkt2 test_initializer_list{ 2.3, 4.6 };
	std::cout << "Punkt2 initializer_list: " << test_initializer_list << std::endl;

	polygon test_initializer{ {4.9, 7.0}, {3.5, 6.8} };
	std::cout << "polygon initializer_list: " << test_initializer << std::endl;
	*/
	Punkt2 p1 = Punkt2(1.0, 2.0);

	Punkt2 p2 = p1;

	Punkt2 p3 = p1 - p2;

	Punkt2 p4 = Punkt2(1000, 2000) - Punkt2(3000, 4000);

	/*Punkt2 p5 = f(Punkt2(10, 20));

	Punkt2 p6 = f(Punkt2(100, 200) - Punkt2(100, 200));*/

	polygon pol{ {4.3,5.6}, {2.5,7.5} };
	pol = polygon{ {2.2,2.2}, {3.3,3.3} };


	//test konstruktorów klasy MapPoint

	MapPoint mp1 = MapPoint();//konstruktor domyœlny

	MapPoint mp2 = MapPoint(7, { 255, 0, 255, 255 }, 10.0, 20.0);

	//test konstruktora konwertuj¹cego z vector klasy polygon

	std::vector<std::vector<double>> vec;
	std::vector<double> punkty;
	punkty.push_back(1.25);
	punkty.push_back(5.36);
	vec.push_back(punkty);
	polygon pol1 = polygon(vec);
	return 0;
}