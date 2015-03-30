#ifndef TRINAGLE_H
#define TRIANGLE_H
#include "Shape.h"

//Circle class inherits all members of Shape class
class Triangle : public Shape
{
private:
	int s1;
	int s2;
	int s3;
	int sps3;

public:
	Triangle(int ,int, int, int, string="Triangle");

	//functions declared virtual so that they can be redefined specifically for Circle
	virtual double perimeter() const; //perfoms perimeter calculation
	virtual void draw() const;		//draws shape
	virtual double Area() const;	//perfomes area calculation
};
#endif
