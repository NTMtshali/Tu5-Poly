#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Shape.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	Shape *Grand[5];
	
	Grand[0] = new Triangle(2, 4, 5, 3);
	Grand[1] = new Rectangle(4, 8);
	Grand[2] = new Rectangle(9, 3);
	Grand[3] = new Circle(3);
	Grand[4] = new Circle(9);
	
	for (int i = 0; i <5; i++)
	{
		cout << Grand[i]->perimeter() <<"\n"<< endl;
	}

}