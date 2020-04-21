/*! \file Punkt2.h
*
* \brief Zawiera deklaracj� klasy Punkt2
*
* Plik zawiera deklaracj� klasy Punkt2.h.
* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
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
	unsigned int count; /*!< Ilo�� wierzcho�k�w wielok�ta */

	Punkt2* vertices; /*!< Tablica wierzocho�k�w */

	double GetTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3); /*funkcja obliczj�ca pole tr�jk�ta*/

	public:
		static unsigned int counter;/*zmienna zliczaj�ca ilo�� obietk�w typu polygon*/

		polygon() = default;/*konstruktor domy�lny*/

		polygon(Punkt2* _vertices, int _count)/*konstruktor niedomy�lny*/
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

		polygon(const polygon &copy)/*konstruktor kopiuj�cy*/
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

		polygon(std::vector<std::vector<double>> &lista)//konstruktow konwertuj�cy z vector
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

		//! Metoda konstruuj�ca tablic� wierzcho�k�w.
		/*!
		  \param _vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
		  \param _count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
		  \sa changeVertex()
		*/
		void setVertices(Punkt2* _vertices, int _count);


		//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
		/*!
		  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
		  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
		  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
		  \sa setVertices()
		*/
		void changeVertex(int i, double x, double y);

		//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
		/*!
		  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
		  \sa setVeritces()
		*/
		void setCount(int n);


		double getPerimeter();/*!< Metoda obliczaj�ca obw�d wielok�ta */

		int getCount();//Metoda zwracaj�ca ilo�� wierzcho�k�w

		double getConvexArea();/*!< Metoda obliczaj�ca pole wypuk�ego wielok�ta */

		//przeladowanie operatora << w zaprzyja�nionej funkcji w klasie
		friend std::ostream& operator<<(std::ostream& os, const polygon& obj);

		//prze�adnowanie kopiujacego operatora przypisania(moze by� tylko w klasie)
		polygon& operator=(const polygon& obj);

		//prze�adowanie operatora indeksowania
		Punkt2& operator[](int i);

		//prze�adowanie przenoszacego operatora przypisania
		polygon& operator=(const polygon &&p);

		//metoda konwertuj�ca ze specyfikatorem explicit, zwracaj�ca tablic� wierzcho�k�w

		//metoda zwracajaca ilo�� wierzcho�k�w

};

//przeladowanie operatora << poza klas�
std::ostream& operator<<(std::ostream& os, const polygon& obj);