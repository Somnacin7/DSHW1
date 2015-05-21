#include"Triangle.h"

class EquilateralTriangle : Triangle{
public:
	EquilateralTriangle() {
		sideLength = 0;
	}

	EquilateralTriangle(double sideLength) {
		this->sideLength = sideLength;
	}

	double getSideLength() { return sideLength; }

	void setSideLength(double length) { sideLength = length; }

	virtual double getArea() {
		return (sqrt(3.0) / 4.0) * sideLength * sideLength;
	}

	virtual double getPerimeter() {
		return sideLength * 3;
	}

private:
	double sideLength;
};