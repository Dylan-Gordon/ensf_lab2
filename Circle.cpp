// circle.cpp

#include "Circle.h"
//#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include "Shape.h"

using namespace std;

Circle::Circle(const char* name, double x, double y, double radius)
	: Shape(name, x, y), radius(radius) {}

double Circle::area(){
	return pow(radius, 2)*M_PI;
}

double Circle::perimeter(){
	return 2*M_PI*radius;
}

double Circle:: getRadius(){
	return radius;
}

void Circle::setRadius(double r){
	radius = r;
}

void Circle::display(){
	Shape::display();
	cout << "Radius: " << radius << endl;
}
