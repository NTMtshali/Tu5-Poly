#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int side1, int side2, int side3, int sideperpside3, string name)
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

double Triangle::Area() const
{
	return s3*sps3 / 2;
}