#include"Polygon.h"

#ifndef TRIANGLE
#define TRIANGLE

class Triangle:Polygon{
public:
	
	Triangle() {
		sideLength = 0;
	}

	Triangle(double length) {
		sideLength = length;
	}

	double getSideLength() { return sideLength; }

	void setSideLength(double length) { sideLength = length; }

	virtual double getArea() {
		return (sqrt(3.0) / 4.0) * sideLength * sideLength;;
	}

	virtual double getPerimeter() {
		return sideLength * 3;
	}

private:
	double sideLength;
};

#endif