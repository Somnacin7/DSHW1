#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{

public:

	Rectangle(double length, double width)
	{
		
		this->length = length;
		this->width = width;
		area = length * width;
		perimeter = 2 * length + 2 * width;
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
		area = length * width;
		perimeter = 2 * length + 2 * width;
	}

	double getWidth() 
	{ 
		return width; 
	}

	void setWidth(double w) 
	{
		width = w; 
		area = length * width;
		perimeter = 2 * length + 2 * width;
	}


private:
	double length;
	double width;

};
