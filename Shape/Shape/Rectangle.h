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
	virtual double perimeter() const = 0;
	virtual void draw() const = 0;
	virtual double Area() const = 0;
};
#endif // !RECTANGLE_H
