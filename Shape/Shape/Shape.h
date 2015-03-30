#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
	string igama;  //data member for name

public:
	Shape(string);
	 string name() const; //retuns the name
	 void setname(string); //sets the name

	 //Pure virtual functions make class Shape an abstract base class 
	virtual double perimeter() const=0;	
	virtual void draw() const = 0;		
	virtual double Area() const = 0;	 
	 			 
};
#endif