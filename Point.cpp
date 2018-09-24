// point.cpp
// ENSF 480 - Lab 2 - Exercise A
// Zach Sims and Dylan Gordon

#include "Point.h"
#include <iostream>
#include <iomanip>
#include <math.h>
	
using namespace std;
	
Point::Point(double x, double y){
	this->x = x;
	this->y = y;
	Point::object_counter++;
	id = 1000 + object_counter;
}
	
Point::~Point(){
	Point::object_counter--;
}

int Point::object_counter = 0;

double Point::getX() {
	return x;
}

double Point::getY(){
	return y;
}

void Point::setX(double d) {
	x = d;
}

void Point::setY(double d) {
	y = d;
}
int Point::counter(){
	return Point::object_counter;
}

void Point::display(){
	cout<< "X-coordinate: " << setprecision(2) << x << endl;
	cout << "Y-coordinate: " << y << endl;
}

double Point::distance(Point p){
	double a = this->x - p.x;
	a = pow(a, 2);
	double b = this->y - p.y;
	b = pow(b, 2);
	
	return sqrt(a + b);
}

double Point :: distance(Point& a, Point& b) {
	
	double x = a.getX() - b.getX();
	x = pow(x, 2);
	
	double y = a.getY() - b.getY();
	y = pow(y, 2);
	
	return sqrt(x + y);
	
	return 0;
}
