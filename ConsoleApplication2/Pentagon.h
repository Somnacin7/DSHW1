#include "Polygon.h"
#include <cmath>

class Pentagon : protected Polygon
{
	// Constructs a regular Pentagon with the provided side length
	Pentagon(double sideLength)
	{
		this->sideLength = sideLength;
		this->perimeter = sideLength * 6;
		this->area = (1/4)*sqrt(5*(5 + 2*sqrt(5)))*pow(sideLength, 2);
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
		this->perimeter = sideLength * 5;
		this->area = (1 / 4)*sqrt(5 * (5 + 2 * sqrt(5)))*pow(sideLength, 2);
	}




private:
	double sideLength;
};