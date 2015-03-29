#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
	string igama;

public:
	Shape(string);
	virtual string name() const;
	virtual double perimeter() const=0;
	virtual void draw() const = 0;
	virtual double Area() const = 0;
	virtual void setname(string);
};
#endif