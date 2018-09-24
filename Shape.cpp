#include <iostream>
#include <stdlib.h>
#include "Shape.h"
#include "Point.h"
#include <string.h>

using namespace std;

Shape::Shape(const char* name, double x, double y) : origin(x, y){
	shapeName = new char[strlen(name) + 1];
	strcpy(shapeName, name);
}

Shape::~Shape() {
	delete[] shapeName;
}

Shape::Shape(const Shape& source) : origin(source.origin), shapeName(new
	char[strlen(source.shapeName) + 1])
{
	if (shapeName == NULL) {
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs)
{
	if (this == &rhs)
		return *this;
	delete[] shapeName;
	shapeName = new char[strlen(rhs.shapeName) + 1];
	if (shapeName == NULL) {
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}

Point& Shape::getOrigin(){
	return origin;
}

string Shape::getName() {
	return shapeName;
}

void Shape::display() {
	cout << "\nShape Name: " << shapeName << endl;
	origin.display();
}

double Shape::distance(Shape& other){
	return origin.distance(other.getOrigin());
}

double Shape::distance(Shape& the_shape, Shape& other){
	return Point::distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy) {
	origin.setX(origin.getX() + dx);
	origin.setY(origin.getY() + dy);
}

