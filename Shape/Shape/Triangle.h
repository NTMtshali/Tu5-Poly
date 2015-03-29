#ifndef TRINAGLE_H
#define TRIANGLE_H
#include "Shape.h"


class Triangle : public Shape
{
private:
	int s1;
	int s2;
	int s3;
	int sps3;

public:
	Triangle(int ,int, int, int, string="Triangle");
	virtual double perimeter() const;
	virtual void draw() const;
	virtual double Area() const;
};
#endif // !TRINAGLE_H
