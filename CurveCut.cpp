// CurveCut.cpp

#include "CurveCut.h"
#include <math.h>
#include <iostream>

using namespace std;

CurveCut :: CurveCut(const char* name, double x, double y, double side_a, double side_b, double radius) : Rectangle(name, x, y, side_a, side_b), Circle(name, x, y, radius), Shape(name, x, y){
	//shapeName = name;
	//this->side_a = side_a;
	//this->side_b = side_b;
	//this->radius = radius;
}
	//: Shape(name, x, y), Rectangle(name, x, y, length, width), Circle(name, x, y, radius){
	
CurveCut::CurveCut(const CurveCut& source) : Shape::Shape(source), Circle::Circle(source), Rectangle::Rectangle(source) {}

CurveCut& CurveCut::operator=(const CurveCut& source) {
	Shape::operator=(source);
	Circle::operator=(source);
	Rectangle::operator=(source);
	return *this;
}
void CurveCut::display(){
	Rectangle::display();
	cout << "Radius of cut: " << radius << endl;
}

double CurveCut::area() {
	return (side_a * side_b) - (0.25*pow(radius, 2)*M_PI);
}

double CurveCut::perimeter() {
	return (2 * side_a + 2 * side_b - 2 * radius + M_PI * radius / 2);
}
	/*
	shapeName = name;
	this->x = x;
	this->y = y;
	this->length = length;
	this->width = width;
	this->radius = radius;
	*/

