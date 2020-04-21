#include "MapPolygon.h"

void MapPolygon::setBorderWidth(int _borderWidth)
{
	borderWidth = _borderWidth;
}

void MapPolygon::setBorderColor(RGBA _borderColor)
{
	borderColor = _borderColor;
}

void MapPolygon::setFillColor(RGBA _fillColor)
{
	fillColor = _fillColor;
}

void MapPolygon::setOpacity(int _opacity)
{
	opacity = _opacity;
}

int MapPolygon::getBorderWidth()
{
	return borderWidth;
}

RGBA MapPolygon::getBorderColor()
{
	return borderColor;
}

RGBA MapPolygon::getFillColor()
{
	return fillColor;
}

int MapPolygon::getOpacity()
{
	return opacity;
}



MapPolygon& MapPolygon::operator=(const MapPolygon&& p)
{
	borderWidth = p.borderWidth;
	borderColor = p.borderColor;
	fillColor = p.fillColor;
	opacity = p.opacity;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const MapPolygon& obj)
{
	os << "[ ";
	
	os << "borderWidth: " << obj.borderWidth << std::endl;
	os << "borderColor: " << obj.borderColor << std::endl;
	os << "fillColor: " << obj.fillColor << std::endl;
	os << "opacity: " << obj.opacity << std::endl;
	return os << " ]";
}