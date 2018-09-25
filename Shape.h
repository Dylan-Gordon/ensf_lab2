

#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"
#include <string>

using namespace std;

class Shape {
public:
	Shape(const char* name, double x, double y);
	//Constructor to initialize data members

	Shape& operator=(const Shape& rhs);

	Shape(const Shape& source);

	virtual ~Shape();
	//Default destructor

	Point& getOrigin();
	//Getter method for origin

	string getName();
	//Getter method for name

	void virtual display();
	//Displays the Shape name in the following format:
	//Shape Name: 
	//x-coordinate:
	//y-coordinate:

	double distance(Shape& other);
	//Calculates the distance from this shape to the other shape

	static double distance(Shape& the_shape, Shape& other);
	//Calculates teh distance between the_shape and other

	void move(double dx, double dy);
	//Changes the shapes orignin coordinates to x + dx and y + dy
	
	virtual double perimeter()=0;
	
	virtual double area()= 0;

protected:
	char* shapeName;
	Point origin;
};
#endif
