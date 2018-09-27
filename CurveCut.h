// CurveCut.h

#include "Rectangle.h"
#include "Circle.h"

#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut: public Rectangle, public Circle{
	
	public:
		
		CurveCut(const char* name, double x, double y, double length, double width, double radius);

		CurveCut(const CurveCut& source);

		CurveCut& operator=(const CurveCut& rhs);
	
		void display();

		double area();
		
		double perimeter();


	private:
	
	
};

#endif
