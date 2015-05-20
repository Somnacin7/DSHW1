#include<math.h>

class Polygon {
public:
	virtual double getArea()= 0;
	virtual double getPerimeter() = 0;

protected:
	double area;
	double perimeter;
};