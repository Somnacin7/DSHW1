#include"Triangle.h"

class EquilateralTriangle{
public:
	EquilateralTriangle() {
		sideLength = 0;
	}

	EquilateralTriangle(double sideLength) {
		this->sideLength = sideLength;
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