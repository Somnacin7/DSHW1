#include "Polygon.h"
#include <cmath>


class Hexagon : Polygon
{
public:
	Hexagon(double sideLength)
	{
		this->sideLength = sideLength;
		this->perimeter = sideLength * 6;
		this->area = ((3 * sqrt(3)) / 2)*pow(sideLength, 2);
	}

	double getArea()
	{
		return area;
	}

	double getPerimeter()
	{
		return perimeter;
	}

private:
	double sideLength;
	
};