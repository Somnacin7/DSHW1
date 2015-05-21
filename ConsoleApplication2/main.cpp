// Authors: Evan Hafner, Robin Steyer
// Course Title: Data Structures
// Course Number: CS2028
// Instructor: Anca Ralescu
// TA: Suryadip Chakraborty
// Abstract: Assignment 1 main.cpp uses the abstract interface Polygon and abstract
//		functions area() and perimeter() to implement classes for Triangle, Isosceles Triangle,
//		Equilateral Triangle, Quadrilateral, Rectangle, Square, Pentagon, Hexagon, and Octagon,
//		and to compute their respective areas and perimeters
// Preconditions:
// Postconditions:

#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Rectangle.h"
//#include "Square.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Octagon.h"
#include <iostream>

void PerformTriangle() {
	int n;
	std::cout << "What is the side length of the regular triangle?" << std::endl;
	std::cin >> n;
	Triangle t = Triangle(n);
	std::cout << "For a regular triangle with side length " << n << ", " << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformEquilateralTriangle() {

}

void PerformIsoscelesTriangle() {

}

int main() {
	using namespace std;

	int choice = 0;
	int type = 0;

	while (choice != 6)	{
		cout << "Which shape would you like to choose? Enter the number of your choice." << endl;
		cout << "1. Triangle" << endl;
		cout << "2. Quadrilateral" << endl;
		cout << "3. Pentagon" << endl;
		cout << "4. Hexagon" << endl;
		cout << "5. Octagon" << endl;
		cout << "6. EXIT" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			while (type != 4) {
				cout << "Enter a number:" << endl;
				cout << "1. Triangle" << endl;
				cout << "2. Equilateral Triangle" << endl;
				cout << "3. Isosceles Triangle" << endl;
				cout << "4. Back" << endl;
				cin >> type;

				switch (type) {
				case 1:
					PerformTriangle();
					break;
				case 2:
					PerformEquilateralTriangle();
					break;
				case 3:
					PerformIsoscelesTriangle();
					break;
				case 4:
					break;
				default:
					cout << "Invalid input." << endl;
					break;
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "Invalid input.";
			break;
		}
	}


	system("pause");

	return 0;
}

