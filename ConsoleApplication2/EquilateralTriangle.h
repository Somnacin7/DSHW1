#include"Triangle.h"

class EquilateralTriangle : protected Triangle{
public:
	/*EquilateralTriangle() {
		sideLength = 0;
	}*/

	EquilateralTriangle(double sideLength) {
		this->sideLength = sideLength;
		area = (sqrt(3.0) / 4.0) * sideLength * sideLength;
		perimeter = sideLength * 3.0;
	}

	double getSideLength() { 
		return sideLength; 
	}

	void setSideLength(double length) { 
		sideLength = length; 
	}

	double getArea() {
		return area;
	}

	double getPerimeter() {
		return perimeter;
	}

private:
	double sideLength;
};