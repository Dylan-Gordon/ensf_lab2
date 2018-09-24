#include <iostream>
#include <stdlib.h>
#include "Shape.h"
#include "Point.h"
#include <string>

using namespace std;

Shape::Shape(string name, double x, double y) 
	: shapeName(name), origin(x, y){}
/*	
Shape::~Shape() {
	delete shapeName;
}*/

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

