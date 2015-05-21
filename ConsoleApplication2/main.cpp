// Authors: Evan Hafner, Robin Steyer
// Course Title: Data Structures
// Course Number: CS2028
// Instructor: Anca Ralescu
// TA: Suryadip Chakraborty
// Abstract: Assignment 1 main.cpp uses the abstract interface Polygon and abstract
//		functions area() and perimeter() to implement classes for Triangle, Isosceles Triangle,
//		Equilateral Triangle, Quadrilateral, Rectangle, Square, Pentagon, Hexagon, and Octagon,
//		and to compute their respective areas and perimeters
// Preconditions: (the input is the side length of the various polygons)
// Postconditions: (the output is the area and perimeter of the polygon with given side length)

#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Octagon.h"
#include <iostream>

// the following functions take in polygon dimensions and output area and perimeter

void PerformTriangle() {
	double n;
	std::cout << "What is the side length of the regular triangle?" << std::endl;
	std::cin >> n;
	Triangle t = Triangle(n);
	std::cout << std::endl << "For a regular triangle with side length " << n << ", " << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformEquilateralTriangle() {
	double n;
	std::cout << "What is the side length of the equilateral triangle?" << std::endl;
	std::cin >> n;
	EquilateralTriangle t = EquilateralTriangle(n);
	std::cout << std::endl << "For an equilateral triangle with side length " << n << ", " << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformIsoscelesTriangle() {
	double b, s;
	std::cout << "What is the base length of the isosceles triangle?" << std::endl;
	std::cin >> b;
	std::cout << "What is the side length of the isosceles triangle?" << std::endl;
	std::cin >> s;
	IsoscelesTriangle t = IsoscelesTriangle(b, s);
	std::cout << std::endl << "For an isosceles triangle with base length " << b << " and side length " << s << "," << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformQuadrilateral() {
	double n;
	std::cout << "What is the side length of the regular quadrilateral?" << std::endl;
	std::cin >> n;
	Quadrilateral q = Quadrilateral(n);
	std::cout << std::endl << "For a regular quadrilateral with side length " << n << ", " << std::endl;
	std::cout << "the area is " << q.getArea() << " and the perimeter is " << q.getPerimeter() << "." << std::endl;
}

void PerformSquare() {
	double n;
	std::cout << "What is the side length of the square?" << std::endl;
	std::cin >> n;
	Square s = Square(n);
	std::cout << std::endl << "For a square with side length " << n << ", " << std::endl;
	std::cout << "the area is " << s.getArea() << " and the perimeter is " << s.getPerimeter() << "." << std::endl;
}

void PerformRectangle() {
	double l, w;
	std::cout << "What is the length of the rectangle?" << std::endl;
	std::cin >> l;
	std::cout << "What is the width of the rectangle?" << std::endl;
	std::cin >> w;
	Rectangle r = Rectangle(l, w);
	std::cout << std::endl << "For a regular quadrilateral with length " << l << " and width " << w << "," << std::endl;
	std::cout << "the area is " << r.getArea() << " and the perimeter is " << r.getPerimeter() << "." << std::endl;
}

void PerformPentagon() {
	double n;
	std::cout << "What is the side length of the regular pentagon?" << std::endl;
	std::cin >> n;
	Pentagon p = Pentagon(n);
	std::cout << std::endl << "For a regular pentagon with side length " << n << ", " << std::endl;
	std::cout << "the area is " << p.getArea() << " and the perimeter is " << p.getPerimeter() << "." << std::endl;
}

void PerformHexagon() {
	double n;
	std::cout << "What is the side length of the regular hexagon?" << std::endl;
	std::cin >> n;
	Hexagon h = Hexagon(n);
	std::cout << std::endl << "For a regular hexagon with side length " << n << ", " << std::endl;
	std::cout << "the area is " << h.getArea() << " and the perimeter is " << h.getPerimeter() << "." << std::endl;
}

void PerformOctagon() {
	double n;
	std::cout << "What is the side length of the regular octagon?" << std::endl;
	std::cin >> n;
	Octagon o = Octagon(n);
	std::cout << std::endl << "For a regular octagon with side length " << n << ", " << std::endl;
	std::cout << "the area is " << o.getArea() << " and the perimeter is " << o.getPerimeter() << "." << std::endl;
}

// main function
int main() {
	using namespace std;

	int choice = 0;
	int type = 0;

	// request user input
	while (choice != 6)	{
		cout << endl << "Which shape would you like to choose? Enter the number of your choice." << endl;
		cout << "1. Triangle" << endl;
		cout << "2. Quadrilateral" << endl;
		cout << "3. Pentagon" << endl;
		cout << "4. Hexagon" << endl;
		cout << "5. Octagon" << endl;
		cout << "6. EXIT" << endl;
		cin >> choice;

		switch (choice) {
		case 1: // Triangle
			while (type != 4) {
			cout << endl << "Enter a number:" << endl;
			cout << "1. Triangle (regular)" << endl;
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
					cout << endl << "Invalid input." << endl;
					break;
				}
			}
			break;

		case 2: // Quadrilateral
			type = 0;
			while (type != 4) {
				cout << endl << "Enter a number:" << endl;
				cout << "1. Quadrilateral (regular)" << endl;
				cout << "2. Square" << endl;
				cout << "3. Rectangle" << endl;
				cout << "4. Back" << endl;
				cin >> type;

				switch (type) {
				case 1:
					PerformQuadrilateral();
					break;
				case 2:
					PerformSquare();
					break;
				case 3:
					PerformRectangle();
					break;
				case 4:
					break;
				default:
					cout << endl << "Invalid input." << endl;
					break;
				}
			}
			break;

		case 3: // Pentagon
			PerformPentagon();
			break;

		case 4: // Hexagon
			PerformHexagon();
			break;

		case 5: // Octagon
			PerformOctagon();
			break;

		case 6: // Quit
			break;

		default:
			cout << endl << "Invalid input." << endl;
			break;
		}
	}

	return 0;
}

