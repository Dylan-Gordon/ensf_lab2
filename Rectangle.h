// Rectangle.h
// ENSF 480 - Lab 2 - Exercise A
// Zach Sims and Dylan Gordon

#include "Shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape {
	public:
	
		Rectangle(string name, double x, double y, double length, double width);

		Rectangle& operator=(Rectangle& source);

		double area();
		//Returns the area of the rectangle

		double perimeter();
		//Returns the perimeter of the rectangle

		void display();
		//Displays info about the rectangle in the following format:
		//Name:
		//x-coordinate:
		//y-coordinate;
		//Side a:
		//Side b:
		//Area:
		//Perimeter:
		void set_side_a(double d);

		void set_side_b(double d);
	private:
	
	double length;
	double width;
	
};

#endif