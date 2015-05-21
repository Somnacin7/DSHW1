#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{

public:

	Rectangle(double length, double width)
	{
		
		this->length = length;
		this->width = width;
	}

	double getArea()
	{
		return length * width;
	}

	double getPerimeter()
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
