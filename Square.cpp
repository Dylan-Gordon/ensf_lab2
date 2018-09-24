#include <iostream>
#include <stdlib.h>
#include "Square.h"
#include <math.h>
#include <iomanip>
using namespace std;

Square::Square(string name, double x, double y, double side)
		: Shape(name, x, y), side_a(side) {}

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

