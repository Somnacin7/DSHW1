#include<math.h>

#ifndef POLYGON
#define POLYGON

class Polygon {
public:
	virtual double getArea()= 0;
	virtual double getPerimeter() = 0;

protected:
	double area;
	double perimeter;
};

#endif