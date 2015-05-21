#include<math.h>

#ifndef POLYGON
#define POLYGON

class Polygon {
public:
	virtual double getArea();
	virtual double getPerimeter();

protected:
	double area;
	double perimeter;
};

#endif
