#include"Polygon.h"
#include <cmath>

class Octagon : protected Polygon{
public:
	// Constructs a regular Octagon with the provided side length
	Octagon(double sideLength)
	{
		this->sideLength = sideLength;
		this->perimeter = sideLength * 8;
		this->area = 2.0*(1.0 + sqrt(2.0))*pow(sideLength, 2.0);
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

	double setSideLength(double l)
	{
		this->sideLength = l;
		this->perimeter = sideLength * 8;
		this->area = 2 * (1 + sqrt(2))*pow(sideLength, 2);
	}




private:
	double sideLength;
};