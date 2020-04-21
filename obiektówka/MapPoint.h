#pragma once
//deklaracja klasy MapPoint - plik MapPoint.h

#include "Punkt2.h"
#include "RGBA.h"

class MapPoint : Punkt2 // po dwukropku podajemy klasê, któr¹ dziedziczy klasa MapPoint
{
	int visRadius; // promieñ ko³a reprezentuj¹cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko³a reprezentuj¹cego punkt na mapie

	//teraz klasa MapPoint posiada cztery sk³adowe materialne: x,y, visRadius, visColor

public:
	MapPoint() : Punkt2(){}//konstruktor domyœlny

	MapPoint(int _visRadius, RGBA _visColor, int _x, int _y) : Punkt2(_x, _y)//konstuktor niedomyœlny
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