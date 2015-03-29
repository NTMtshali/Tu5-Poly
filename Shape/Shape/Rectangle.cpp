#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle:: Rectangle(int X, int Y, string name)
	:Shape(name)
{
	x = X;
	y = Y;
}

double Rectangle::perimeter() const
{
	return x + y;
}

double Rectangle::Area()const
{
	return x*y;
}