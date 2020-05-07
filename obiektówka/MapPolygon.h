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
	MapPolygon() : polygon()/*konstruktor domyœlny*/
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

	MapPolygon(const MapPolygon& obj, const polygon& copy) : polygon(copy)/*konstruktor kopiuj¹cy*/
	{
		borderWidth = obj.borderWidth;
		borderColor = obj.borderColor;
		fillColor = obj.fillColor;
		opacity = obj.opacity;
	}

	MapPolygon(int _borderWidth, int _opacity, RGBA& _borderColor, RGBA& _fillColor, const std::initializer_list<std::initializer_list<double>>& punkty) : polygon(punkty)/*konstruktor z parametrem std::initializer_list*/
	{
		borderWidth = _borderWidth;
		opacity = _opacity;
		borderColor = _borderColor;
		fillColor = _fillColor;
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

	//prze³adowanie przenoszacego operatora przypisania
	MapPolygon& operator=(const MapPolygon&& p);

	//przeladowanie operatora << w zaprzyjaŸnionej funkcji w klasie
	friend std::ostream& operator<<(std::ostream& os, const MapPolygon& obj);
};
//przeladowanie operatora << poza klas¹
std::ostream& operator<<(std::ostream& os, const MapPolygon& obj);