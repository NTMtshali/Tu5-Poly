#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int side1, int side2, int side3, int sideperpside3, string name)
//explicitly call base-class constructor
	: Shape(name)
{
	s1 = side1;
	s2 = side1;
	s3 = side3;
	sps3 = sideperpside3;

}

double Triangle::perimeter() const
{
	return s1 + s2 + s3;
}

void Triangle::draw() const
{
	cout <<"\t"<<       "+" << endl;
	cout <<"\t"<<     "+++++" << endl;
	cout <<"\t"<<    "+++++++" << endl;
	cout <<"\t"<<   "+++++++++" << endl;
	cout <<"\t"<<  "+++++++++++" << endl;
	cout <<"\t"<< "+++++++++++++" << endl;
}
double Triangle::Area() const
{
	return s3*sps3 / 2;
}