#ifndef	CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

  //Circle class inherits all members of Shape	class
class Circle : public Shape
{
private:
	int radius;

public:

	Circle(int, string="Circle");

	//functions declared virtual so that they can be redefined specifically for Circle
	virtual double perimeter() const; //perfoms perimeter calculation
	virtual void draw() const;		//draws shape
	virtual double Area() const;	//perfomes area calculation
};

#endif
