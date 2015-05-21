#include "Quadrilateral.h"

class Square : Quadrilateral
{
public:
	Square(double length)
	{
		this->length = length;
		area = 0;
	}

	double getArea()
	{

	}



private:
	double length;
};