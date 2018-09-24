#include "Shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : public Shape {
public:
	Square(const char* name, double x, double y, double side);
	//Constructor to initialize data members

	Square& operator=(const Square& rhs);
	double area();
	//Returns the area of the square

	double perimeter();
	//Returns the perimeter of the square

	void display();
	//Displays the info about the square in the following format:
	//Square Name:
	//x-coordinate:
	//y-coordinate:
	//Side a:
	//Area:
	//Perimeter:

protected:
	double side_a;
};
#endif