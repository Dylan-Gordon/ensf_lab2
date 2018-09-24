// CurveCut.cpp

#include "CurveCut.h"

CurveCut :: CurveCut(const char* name, double x, double y, double length, double width, double radius){
	shapeName = name;
	this->x = x;
	this->y = y;
	this->length = length;
	this->width = width;
	this->radius = radius;
}
