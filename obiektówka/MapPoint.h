#pragma once
//deklaracja klasy MapPoint - plik MapPoint.h

#include "Punkt2.h"
#include "RGBA.h"

class MapPoint : Punkt2 // po dwukropku podajemy klas�, kt�r� dziedziczy klasa MapPoint
{
	int visRadius; // promie� ko�a reprezentuj�cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko�a reprezentuj�cego punkt na mapie

	//teraz klasa MapPoint posiada cztery sk�adowe materialne: x,y, visRadius, visColor

public:
	MapPoint() : Punkt2(){}//konstruktor domy�lny

	MapPoint(int _visRadius, RGBA _visColor, int _x, int _y) : Punkt2(_x, _y)//konstuktor niedomy�lny
	{
		visRadius = _visRadius;
		visColor = _visColor;
	}

	//settery
	void setVisRadius(int r);
	void setVisColor(RGBA color);

	//gettery
	int getVisRadius();
	RGBA getVisColor();
};