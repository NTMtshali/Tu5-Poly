#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

//Circle class inherits all members of Shape class
class  Rectangle : public Shape
{
private:
	int x;
	int y;

public:
	Rectangle(int, int, string = "Rectangle");

	//functions declared virtual so that they can be redefined specifically for Circle
	virtual double perimeter() const; //perfoms perimeter calculation
	virtual void draw() const;		//draws shape
	virtual double Area() const;	//perfomes area calculation
};
#endif
