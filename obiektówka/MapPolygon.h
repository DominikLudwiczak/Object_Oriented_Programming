#pragma once
#include "polygon.h"
#include "RGBA.h"
class MapPolygon: polygon
{
	int borderWidth;
	RGBA borderColor;
	RGBA fillColor;
	int opacity;

public:
	MapPolygon() : polygon()/*konstruktor domy�lny*/
	{
		borderWidth = 1;

		borderColor.r = 192;
		borderColor.g = 192;
		borderColor.b = 192;
		borderColor.a = 240;

		fillColor.r = 56;
		fillColor.g = 56;
		fillColor.b = 56;
		fillColor.a = 120;

		opacity = 255;
	}

	MapPolygon(const MapPolygon& obj) : polygon()/*konstruktor kopiuj�cy*/
	{
		borderWidth = obj.borderWidth;
		borderColor = obj.borderColor;
		fillColor = obj.fillColor;
		opacity = obj.opacity;
	}

	MapPolygon(int _borderWidth, int _opacity) : polygon()/*konstruktor z parametrem std::initializer_list*/
	{
		borderWidth = _borderWidth;
		opacity = _opacity;
	}

	~MapPolygon()/*destruktor*/
	{
	}

	//settery
	void setBorderWidth(int _borderWidth);
	void setBorderColor(RGBA _borderColor);
	void setFillColor(RGBA _fillColor);
	void setOpacity(int _opacity);

	//gettery
	int getBorderWidth();
	RGBA getBorderColor();
	RGBA getFillColor();
	int getOpacity();

	//prze�adowanie przenoszacego operatora przypisania
	MapPolygon& operator=(const MapPolygon&& p);

	//przeladowanie operatora << w zaprzyja�nionej funkcji w klasie
	friend std::ostream& operator<<(std::ostream& os, const MapPolygon& obj);
};
//przeladowanie operatora << poza klas�
std::ostream& operator<<(std::ostream& os, const MapPolygon& obj);