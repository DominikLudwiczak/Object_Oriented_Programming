#pragma once
#include <iostream>
struct RGBA
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a{ 255 };

	friend std::ostream& operator<<(std::ostream& os, const RGBA& obj);
};
std::ostream& operator<<(std::ostream& os, const RGBA& obj)
{
	os << "(" << obj.r << "," << obj.g << "," << obj.b << "," << obj.a << ")";
	return os;
}