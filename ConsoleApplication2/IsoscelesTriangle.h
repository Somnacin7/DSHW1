#include"Triangle.h"

class IsoscelesTriangle : protected Triangle{
public:
	double sideLength;
	double baseLength;

	/*IsoscelesTriangle() {
		sideLength = 0;
		baseLength = 0;
	}*/

	IsoscelesTriangle(double baseLength, double sideLength) {
		this->baseLength = baseLength;
		this->sideLength = sideLength;
		area = sqrt((sideLength * sideLength) - ((baseLength / 2.0) * (baseLength / 2.0))) * baseLength * 0.5;
		perimeter = (sideLength * 2.0) + baseLength;

	}

	double getSideLength() { return sideLength; }
	void setSideLength(double sideLength) { this->sideLength = sideLength; }
	double getBaseLength() { return baseLength; }
	void setBaseLength(double baseLength) { this->baseLength = baseLength; }
	
	double getArea() {
		return area;
	}

	double getPerimeter() {
		return perimeter;
	}
};