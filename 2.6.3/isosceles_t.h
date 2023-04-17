#pragma once
#include "Triangle.h"
class isosceles_t : public Triangle {
public:
	isosceles_t(std::string n, int a, int b, int c, int A, int B, int C) : Triangle(n, a, b, c, A, B, C) {
		n = "равнобедренный треугольник";
		A = C;
		a = c;
		set(n, a, b, c, A, B, C);
	}
	isosceles_t() : isosceles_t("равнобедренный треугольник", 10, 20, 30, 50, 60, 70) { ; }
};