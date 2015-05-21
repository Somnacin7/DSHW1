#include "Polygon.h"
#include <cmath>


class Hexagon : protected Polygon
{
public:
	// Constructs a regular Hexagon with the provided side length
	Hexagon(double sideLength)
	{
		this->sideLength = sideLength;
		this->perimeter = sideLength * 6;
		this->area = ((3 * sqrt(3)) / 2)*pow(sideLength, 2);
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
		this->perimeter = sideLength * 6;
		this->area = ((3 * sqrt(3)) / 2)*pow(sideLength, 2);
	}




private:
	double sideLength;
	
};