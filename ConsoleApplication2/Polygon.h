#include<math.h>

class Polygon {
public:
	virtual double getArea();
	virtual double getPerimeter();

protected:
	double area;
	double perimeter;
};