#include "MapPoint.h"
void MapPoint::setVisRadius(int r)
{
	visRadius = r;
}

void MapPoint::setVisColor(RGBA color)
{
	visColor = color;
}

int MapPoint::getVisRadius()
{
	return visRadius;
}

RGBA MapPoint::getVisColor()
{
	return visColor;
}