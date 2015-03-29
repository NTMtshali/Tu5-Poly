#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class  Rectangle : public Shape
{
private:
	int x;
	int y;

public:
	Rectangle(int, int, string = "Rectangle");
	virtual double perimeter() const;
	virtual void draw() const;
	virtual double Area() const ;
};
#endif
