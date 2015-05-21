#include "Polygon.h"
#include <cmath>

class Pentagon : protected Polygon {
public:
	// Constructs a regular Hexagon with the provided side length
	Pentagon(double sideLength) {
		this->sideLength = sideLength;
		this->perimeter = sideLength * 6;
		this->area = (.25)*sqrt(5.0*(5.0 + 2.0*sqrt(5.0)))*pow(sideLength, 2.0);
	}

	double getSideLength() {
		return sideLength;
	}

	double getArea() {
		return area;
	}

	double getPerimeter() {
		return perimeter;
	}

	double setSideLength(double l) {
		this->sideLength = l;
		this->perimeter = sideLength * 5;
		this->area = (1 / 4)*sqrt(5 * (5 + 2 * sqrt(5)))*pow(sideLength, 2);
	}

private:
	double sideLength;
};