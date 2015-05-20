#include"Polygon.h"

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

	virtual double area() {
		return sideLength * sideLength * 0.5;
	}

	virtual double perimeter() {
		return sideLength * 3;
	}

private:
	double sideLength;
};