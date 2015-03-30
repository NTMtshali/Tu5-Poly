#include "Circle.h"
#include <iostream>
using namespace std;


Circle::Circle(int r, string name)
//explicitly call base-class constructor
	:Shape(name)
{
	radius = r;
}

double Circle::perimeter() const
{
	return  2 * 3.14*radius;
}
 //drawing the shape
void Circle::draw() const
{
	cout <<"\t"<<          "+" << endl;
	cout <<"\t"<<      "+++++++++" << endl;
	cout <<"\t"<<    "+++++++++++++" << endl;
	cout <<"\t"<<  "+++++++++++++++++" << endl;
	cout <<"\t"<< "+++++++++++++++++++" << endl;
	cout <<"\t"<<  "+++++++++++++++++" << endl;
	cout <<"\t"<<    "+++++++++++++" << endl;
	cout <<"\t"<<      "+++++++++" << endl;
	cout <<"\t"<<          "+" << endl;
}

double Circle::Area() const
{
	return (radius ^ 2)*3.14;
}