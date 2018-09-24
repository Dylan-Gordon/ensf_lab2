// Rectangle.cpp

#include <iostream>
#include <stdlib.h>
#include "Square.h"
#include <math.h>
#include <iomanip>
#include "Rectangle.h"

Rectangle::Rectangle(string name, double x, double y, double length, double width)
			: Shape(name, x, y), length(length), width(width){}

Rectangle& Rectangle::operator=(Rectangle& source) {
	Shape(source.getName(), source.getOrigin().getX(), source.getOrigin().getY());
	length = source.length;
	width = source.width;
}
double Rectangle::area() {
	return (length * width);
}

double Rectangle::perimeter() {
	return (double(2)*length + double(2)*width);
}

void Rectangle::display() {
	Shape::display();
	cout << "Side a: " << setprecision(10) << length << endl;
	cout << "Side b: " << width << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}

void Rectangle::set_side_a(double d) {
	length = d;
}

void Rectangle::set_side_b(double d) {
	width = d;
}