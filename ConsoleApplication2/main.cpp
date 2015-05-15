#include "Rectangle.h"
#include <iostream>


int main()
{
	using namespace std;

	Rectangle r = Rectangle(2, 4);
	cout << r.getLength() << endl;

	system("pause");

	return 0;
}