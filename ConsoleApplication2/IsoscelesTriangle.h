#include"Triangle.h"

class IsoscelesTriangle:Triangle{
public:
	double sideLength;
	double baseLength;

	IsoscelesTriangle() {
		sideLength = 0;
		baseLength = 0;
	}

	IsoscelesTriangle(double sideLength, double baseLength) {
		this->sideLength = sideLength;
		this->baseLength = baseLength;
	}

	double getSideLength() { return sideLength; }
	void setSideLength(double sideLength) { this->sideLength = sideLength; }
	double getBaseLength() { return baseLength; }
	void setBaseLength(double baseLength) { this->baseLength = baseLength; }
	
	double getArea() {
		return sqrt((sideLength * sideLength) - ((baseLength / 2) * (baseLength / 2))) * baseLength * 0.5;
	}

	double getPerimeter() {
		return (sideLength * 2) + baseLength;
	}
};