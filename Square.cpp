#include <iostream>
#include <stdlib.h>
#include "Square.h"
#include <math.h>
#include <iomanip>
using namespace std;

Square::Square(const char* name, double x, double y, double side)
		: Shape(name, x, y), side_a(side) {}

Square::Square(const Square& source) : Shape(source), side_a(source.side_a) {}

Square& Square::operator=(const Square& rhs) {
	Shape::operator=(rhs);
	side_a = rhs.side_a;
	return *this;
}

double Square::area() {
	return (side_a * side_a);
}

double Square::perimeter() {
	return (double(4)*side_a);
}

void Square::display(){
	Shape::display();
	cout << "\nSide a: " << setprecision(10) << side_a << endl;
	cout << "\nArea: " << area() << endl;
	cout << "\nPerimeter: " << perimeter() << endl;
}

