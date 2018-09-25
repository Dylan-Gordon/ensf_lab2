// CurveCut.cpp

#include "CurveCut.h"
#include <iostream>

using namespace std;

CurveCut :: CurveCut(const char* name, double x, double y, double side_a, double side_b, double radius) : Rectangle(name, x, y, side_a, side_b), Circle(name, x, y, radius), Shape(name, x, y){
	//shapeName = name;
	//this->side_a = side_a;
	//this->side_b = side_b;
	//this->radius = radius;
}
	//: Shape(name, x, y), Rectangle(name, x, y, length, width), Circle(name, x, y, radius){
	
	
void CurveCut::display(){
	Rectangle::display();
	cout << "Radius of cut: " << radius << endl;
}
	/*
	shapeName = name;
	this->x = x;
	this->y = y;
	this->length = length;
	this->width = width;
	this->radius = radius;
	*/

