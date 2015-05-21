#include "Quadrilateral.h"

class Square : protected Quadrilateral
{
public:
	Square(double length)
	{
		this->length = length;
		area = length * length;
		perimeter = length * 4;
	}

	double getArea()
	{
		return area;
	}

	double getPerimeter()
	{
		return perimeter;
	}

	double getLength()
	{
		return length;
	}

	void setLength(double l)
	{
		length = l;
		area = length * length;
		perimeter = length * 4;
	}



private:
	double length;
};