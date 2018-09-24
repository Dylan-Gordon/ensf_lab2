// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape{
	
	public:
	
		Circle(string name, double x, double y, double radius);
	
		double area();
	
		double perimeter();
		
		double getRadius();
		
		void setRadius(double r);
		
		void display();
		
	private:
	
		double radius;
	
};


#endif
