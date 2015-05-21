#include "Polygon.h"


class Quadrilateral : protected Polygon
{
public:
	Quadrilateral() {} 

	// Construct a regular quadrilateral
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