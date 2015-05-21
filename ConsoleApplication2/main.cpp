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
#include "Square.h"
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
	int n;
	std::cout << "What is the side length of the equilateral triangle?" << std::endl;
	std::cin >> n;
	EquilateralTriangle t = EquilateralTriangle(n);
	std::cout << "For an equilateral triangle with side length " << n << ", " << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformIsoscelesTriangle() {
	int b, s;
	std::cout << "What is the base length of the isosceles triangle?" << std::endl;
	std::cin >> b;
	std::cout << "What is the side length of the isosceles triangle?" << std::endl;
	std::cin >> s;
	IsoscelesTriangle t = IsoscelesTriangle(b, s);
	std::cout << "For an isosceles triangle with base length " << b << " and side length " << s << "," << std::endl;
	std::cout << "the area is " << t.getArea() << " and the perimeter is " << t.getPerimeter() << "." << std::endl;
}

void PerformQuadrilateral() {
	int n;
	std::cout << "What is the side length of the regular quadrilateral?" << std::endl;
	std::cin >> n;
	Quadrilateral q = Quadrilateral(n);
	std::cout << "For a regular quadrilateral with side length " << n << ", " << std::endl;
	std::cout << "the area is " << q.getArea() << " and the perimeter is " << q.getPerimeter() << "." << std::endl;
}

void PerformSquare() {
	int n;
	std::cout << "What is the side length of the square?" << std::endl;
	std::cin >> n;
	Square s = Square(n);
	std::cout << "For a square with side length " << n << ", " << std::endl;
	std::cout << "the area is " << s.getArea() << " and the perimeter is " << s.getPerimeter() << "." << std::endl;
}

void PerformRectangle() {
	int l, w;
	std::cout << "What is the length of the rectangle?" << std::endl;
	std::cin >> l;
	std::cout << "What is the width of the rectangle?" << std::endl;
	std::cin >> w;
	Rectangle r = Rectangle(l, w);
	std::cout << "For a regular quadrilateral with length " << l << " and width " << w << "," << std::endl;
	std::cout << "the area is " << r.getArea() << " and the perimeter is " << r.getPerimeter() << "." << std::endl;
}


int main() {
	using namespace std;

	int choice = 0;
	int type = 0;

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
		case 1:
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
					cout << "Invalid input." << endl;
					break;
				}
			}
			break;

		case 2:
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
					cout << "Invalid input." << endl;
					break;
				}
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

