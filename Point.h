// Point.h
// ENSF 480 Lab 2 Exercise A
// Zach Sims and Dylan Gordon

#ifndef POINT_H
#define POINT_H

class Point {
public:
	
	Point(double x, double y);
	// Promises: creates an object of type point that initializes all of its data members.
	
	~Point();
	// Promises: decrements the counter for how many objects of point.
	
	// Getters and Setters
	double getX();
	
	double getY();

	void setX(double d);

	void setY(double d);
	
	//functions
	
	void display();
	
	int counter();
	
	// two distance functions that return the distance between two points
	// one must be static the other must be regular function.
	
	double distance(Point p);
	
	double static distance(Point& a,Point& b);
	
	private:
	
	static int object_counter;
	
	double x, y;
	
	int id;
};

#endif