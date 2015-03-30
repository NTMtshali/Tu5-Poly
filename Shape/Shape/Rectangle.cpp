#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle:: Rectangle(int X, int Y, string name)
//explicitly call base-class constructor
	:Shape(name)
{
	x = X;
	y = Y;
}

double Rectangle::perimeter() const
{
	return x + y;
}

void Rectangle::draw()	const
{
	cout <<"\t"<<"++++++++++++" << endl;
	cout <<"\t"<<"++++++++++++" << endl;
	cout <<"\t"<<"++++++++++++" << endl;
	cout <<"\t"<<"++++++++++++" << endl;
}

double Rectangle::Area()const
{
	return x*y;
}