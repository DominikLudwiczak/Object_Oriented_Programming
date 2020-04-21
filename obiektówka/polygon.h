/*! \file Punkt2.h
*
* \brief Zawiera deklaracjê klasy Punkt2
*
* Plik zawiera deklaracjê klasy Punkt2.h.
* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
* Klasa zawiera kilka metod skladowych
*
* \author Dominik Ludwiczak
* \date 2020.02.24
* \version 1.00.00
*/

#pragma once

#include "Punkt2.h"
#include <cmath>
#include <vector>

class polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2* vertices; /*!< Tablica wierzocho³ków */

	double GetTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3); /*funkcja obliczj¹ca pole trójk¹ta*/

	public:
		static unsigned int counter;/*zmienna zliczaj¹ca iloœæ obietków typu polygon*/

		polygon() = default;/*konstruktor domyœlny*/

		polygon(Punkt2* _vertices, int _count)/*konstruktor niedomyœlny*/
		{
			count = _count;
			vertices = new Punkt2[count];
			for (int i = 0; i < count; i++)
			{
				vertices[i].setX(_vertices[i].getX());
				vertices[i].setY(_vertices[i].getY());
			}
			counter++;
		}

		polygon(const polygon &copy)/*konstruktor kopiuj¹cy*/
		{
			count = copy.count;
			vertices = new Punkt2[count];
			for (int i = 0; i < count; i++)
			{
				vertices[i].setX(copy.vertices[i].getX());
				vertices[i].setY(copy.vertices[i].getY());
			}
			counter++;
		}

		polygon(const std::initializer_list<std::initializer_list<double>>& punkty)/*konstruktor z parametrem std::initializer_list*/
		{
			count = punkty.size();
			vertices = new Punkt2[count];
			int i = 0;
			for (auto p : punkty)
				vertices[i++] = p;
		}

		polygon(std::vector<std::vector<double>> &lista)//konstruktow konwertuj¹cy z vector
		{
			count = lista.size();
			std::initializer_list<double> punkty;
			vertices = new Punkt2[count];
			int i = 0;
			for (auto row : lista)
			{
				for (auto wiersz : row)
				{
					punkty = { wiersz };
					vertices[i] = Punkt2(punkty);
				}
				i++;
			}
		}

		~polygon()/*destruktor*/
		{
			delete vertices;
		}

		//! Metoda konstruuj¹ca tablicê wierzcho³ków.
		/*!
		  \param _vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
		  \param _count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
		  \sa changeVertex()
		*/
		void setVertices(Punkt2* _vertices, int _count);


		//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
		/*!
		  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
		  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
		  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
		  \sa setVertices()
		*/
		void changeVertex(int i, double x, double y);

		//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
		/*!
		  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
		  \sa setVeritces()
		*/
		void setCount(int n);


		double getPerimeter();/*!< Metoda obliczaj¹ca obwód wielok¹ta */

		int getCount();//Metoda zwracaj¹ca iloœæ wierzcho³ków

		double getConvexArea();/*!< Metoda obliczaj¹ca pole wypuk³ego wielok¹ta */

		//przeladowanie operatora << w zaprzyjaŸnionej funkcji w klasie
		friend std::ostream& operator<<(std::ostream& os, const polygon& obj);

		//prze³adnowanie kopiujacego operatora przypisania(moze byæ tylko w klasie)
		polygon& operator=(const polygon& obj);

		//prze³adowanie operatora indeksowania
		Punkt2& operator[](int i);

		//prze³adowanie przenoszacego operatora przypisania
		polygon& operator=(const polygon &&p);

		//metoda konwertuj¹ca ze specyfikatorem explicit, zwracaj¹ca tablicê wierzcho³ków

		//metoda zwracajaca iloœæ wierzcho³ków

};

//przeladowanie operatora << poza klas¹
std::ostream& operator<<(std::ostream& os, const polygon& obj);