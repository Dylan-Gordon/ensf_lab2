// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: virtual public Shape{
	
	public:
	
		Circle(const char* name, double x, double y, double radius);

		Circle(const Circle& source);

		Circle& operator=(const Circle& rhs);
	
		double area();
	
		double perimeter();
		
		double getRadius();
		
		void setRadius(double r);
		
		void display();
		
	protected:
	
		double radius;
	
};


#endif
