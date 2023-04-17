#pragma once
#include "isosceles_t.h"
class equilateral_t : public isosceles_t {
public:
	equilateral_t(std::string n, int a, int b, int c, int A, int B, int C) : isosceles_t(n, a, b, c, A, B, C) {
		n = "равносторонний треугольник";
		A = 60;
		B = A;
		C = A;
		a = b;
		c = b;
		set(n, a, b, c, A, B, C);
	}
	equilateral_t() : equilateral_t("равносторонний треугольник", 10, 20, 30, 50, 60, 70) { ; }

};