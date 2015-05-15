#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{

public:
	Rectangle()
	{
		length = 0;
		width = 0;
	}

	Rectangle(double length, double width)
	{
		this->length = length;
		this->width = width;
	}

	double area()
	{
		return length * width;
	}

	double perimeter()
	{
		return 2 * length + 2 * width;
	}

	double getLength() { return length; }
	void setLength(double l) { length = l; }
	double getWidth() { return width; }
	void setWidth(double w) { width = w; }


private:
	double length;
	double width;

};
