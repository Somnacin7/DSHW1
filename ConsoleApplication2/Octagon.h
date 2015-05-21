#include"Polygon.h"
#include <cmath>

class Octagon : protected Polygon{
	// Constructs a regular Octagon with the provided side length
	Octagon(double sideLength)
	{
		this->sideLength = sideLength;
		this->perimeter = sideLength * 8;
		this->area = 2*(1 + sqrt(2))*pow(sideLength, 2);
	}

	double getSideLength()
	{
		return sideLength;
	}

	double getArea()
	{
		return area;
	}

	double getPerimeter()
	{
		return perimeter;
	}

	// Get sidelength and recalculate area and perimeter
	double setSideLength(double l)
	{
		this->sideLength = l;
		this->perimeter = sideLength * 8;
		this->area = 2 * (1 + sqrt(2))*pow(sideLength, 2);
	}




private:
	double sideLength;
};