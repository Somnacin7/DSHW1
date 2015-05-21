#include "Polygon.h"

#ifndef QUAD
#define QUAD

// Produces a regulare quadrilateral
class Quadrilateral : protected Polygon
{
public:
	Quadrilateral() {} 

	Quadrilateral(double length)
	{
		this->length = length;
		area = length * length;
		perimeter = length * 4;
	}

	virtual double getArea()
	{
		return area;
	}


	virtual double getPerimeter()
	{
		return perimeter;
	}

private:
	double length;

};

#endif