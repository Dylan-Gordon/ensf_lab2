// Rectangle.cpp

#include <iostream>
#include <stdlib.h>
#include "Square.h"
#include <math.h>
#include <iomanip>
#include "Rectangle.h"

Rectangle::Rectangle(const char* name, double x, double y, double length, double width)
			:  Square(name, x, y, length), Shape(name, x, y), side_b(width){}

Rectangle::Rectangle(const Rectangle& source) : Square(source), Shape(source), side_b(source.side_b) {}

Rectangle& Rectangle::operator=(const Rectangle& rhs) {
	Square::operator=(rhs);
	side_b = rhs.side_b;
	return *this;
}
double Rectangle::area() {
	return (side_a * side_b);
}

double Rectangle::perimeter() {
	return (double(2)*side_a + double(2)*side_b);
}

void Rectangle::display() {
	Shape::display();
	cout << "Side a: " << side_a << endl;
	cout << "Side b: " << side_b << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}

void Rectangle::set_side_a(double d) {
	side_a = d;
}

void Rectangle::set_side_b(double d) {
	side_b = d;
}
