#pragma once
#include "Figure.h"
class Triangle : public Figure {
public:
	void set(std::string name, int a, int b, int c, int A, int B, int C);
	std::string get_name();
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	Triangle(std::string name, int a, int b, int c, int A, int B, int C) {
		this->name = "треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	Triangle() : Triangle("треугольник", 10, 20, 30, 50, 60, 70) { ; }
};