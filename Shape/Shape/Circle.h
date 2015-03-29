#ifndef	CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
private:
	int radius;

public:
	Circle(int, string="Circle");
	virtual double perimeter() const;
	virtual void draw() const;
	virtual double Area() const;
};

#endif
