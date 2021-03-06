// GraphicsWorld.cpp

#include "GraphicsWorld.h"
#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Square.h"
#include "Shape.h"
#include "Circle.h"
#include "CurveCut.h"

using namespace std;

void GraphicsWorld::run(){
#if 1
	Point m (6, 8);
	Point n (6, 8);
	n.setX(9);
	
	cout << "\nExpecting to display the distance between m and n is: 3";
	cout << "\n The distance between m and n is: " << m.distance(n);
	cout << "\nExpecting second version of the distance function to also print: 3";
	cout << "\n the distance between m and n is again: ";
	cout << Point::distance(m, n);
#endif		// testing class Point

#if 1
	
	cout << "\n\n Testing Functions in class Square:" << endl;
	
	Square s( "SQUARE - S", 5, 7, 12);
	s.display();
#endif



	cout << "\n Testing Functions in class Rectangle:";
	Rectangle a("Rectangle A", 5, 7, 12, 15);
	a.display();
	Rectangle b("Rectangle B", 16, 7, 8, 9);
	b.display();
	double d = a.distance(b);
	cout <<"\nDistance between square a, and b is: " << d << endl;
	Rectangle rec1 = a;
	rec1.display();

	cout << "\nTesting assignment operator in class Rectangle:" <<endl;
	Rectangle rec2 ("RECTANGLE rec2", 3, 4, 11, 7);
	rec2.display();
	rec2 = a;
	a.set_side_b(200);
	a.set_side_a(100);
	cout << "\nExpected to display the following values for objec rec2: " << endl;
	cout << "Rectangle Name: RECTANGLE A\n" << "X-coordinate: 5\n" << "Y-coordinate: 7\n"
	<< "Side a: 12\n" << "Side b: 15\n" << "Area: 180\n" << "Perimeter: 54\n" ;
	cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << endl;
	rec2.display();

#if 1

	cout << "\nTesting copy constructor in class Rectangle:" <<endl;
	Rectangle rec3 (a);
	rec3.display();
	a.set_side_b(300);
	a.set_side_a(400);
	cout << "\nExpected to display the following values for objec rec2: " << endl;
	cout << "Rectangle Name: RECTANGLE A\n" << "X-coordinate: 5\n" << "Y-coordinate: 7\n"
	<< "Side a: 100\n" << "Side b: 200\n" << "Area: 20000\n" << "Perimeter: 600\n" ;
	cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << endl;
	rec3.display();
#endif // end of block to test Rectangle

#if 1 // Change 0 to 1 to test using array of pointer and polymorphism
	cout << "\nTesting Functions in class Circle:" << endl;
	Circle c("CIRCLE C", 3, 5, 9);
	c.display();
	cout << "the area of " << c.getName() << " is: " << c.area() << endl;
	cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
	d = a.distance(c);
	cout << "\nThe distance between rectangle a and circle c is: " << d;

	CurveCut rc("CurveCut rc", 6, 5, 10, 12, 9);
	rc.display();
	cout << "the area of " << rc.getName() << " is: " << rc.area();
	cout << "the perimeter of " << rc.getName() << " is: " << rc.perimeter();
	d = rc.distance(c);
	cout << "\nThe distance between rc and c is: " << d;
	// Using array of Shape pointers:
	Shape* sh[4];
	sh[0] = &s;
	sh[1] = &a;
	sh[2] = &c;
	sh[3] = &rc;
	sh[0]->display();
	cout << "\nthe area of " << sh[0]->getName() << " is: " << sh[0]->area();
	cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[0]->perimeter();
	sh[1]->display();
	cout << "\nthe area of " << sh[1]->getName() << " is: " << sh[1]->area();
	cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[1]->perimeter();
	sh[2]->display();
	cout << "\nthe area of " << sh[2]->getName() << " is: " << sh[2]->area();
	cout << "\nthe circumference of " << sh[2]->getName() << " is: " << sh[2]->perimeter();
	sh[3]->display();
	cout << "\nthe area of " << sh[3]->getName() <<  "is: " << sh[3]->area();
	cout << "\nthe perimeter of " << sh[3]->getName() << " is: " << sh[3]->perimeter();

	cout << "\nTesting copy constructor in class CurveCut:" << endl;
	CurveCut cc = rc;
	cc.display();
	cout << "\nTesting assignment operator in class CurveCut:" << endl;
	CurveCut cc2("CurveCut cc2", 2, 5, 100, 12, 9);
	cc2.display();
	cc2 = cc;
	cc2.display();
#endif 
}

