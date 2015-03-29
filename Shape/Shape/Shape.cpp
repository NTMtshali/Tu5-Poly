#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(string name)
{
	setname(name);
}

 string Shape:: name() const
{
	return igama;
}

 void Shape::setname(string name)
 {
	 igama = name;
 }
