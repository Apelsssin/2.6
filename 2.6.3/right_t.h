#pragma once
#include "Triangle.h"
class right_t : public Triangle {
public:
	right_t(std::string n, int a, int b, int c, int A, int B, int C) : Triangle(n, a, b, c, A, B, C) {
		n = "прямоугольный треугольник";
		C = 90;
		set(n, a, b, c, A, B, C);
	}
	right_t() : right_t("прямоугольный треугольник", 10, 20, 30, 50, 60, 70) { ; }

};