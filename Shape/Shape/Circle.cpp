#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int r, string name)
	:Shape(name)
{
	int radius = r;
}

double Circle::perimeter() const
{
	return  2 * 3.14*radius;
}

void Circle::draw() const
{
	cout <<          "+";
	cout <<      "+++++++++";
	cout <<    "+++++++++++++";
	cout <<  "+++++++++++++++++";
	cout << "+++++++++++++++++++";
	cout <<  "+++++++++++++++++";
	cout <<    "+++++++++++++";
	cout <<      "+++++++++";
	cout <<          "+" << endl;
}

double Circle::Area() const
{
	return (radius ^ 2)*3.14;
}