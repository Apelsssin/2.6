#pragma once
#include "Triangle.h"
class isosceles_t : public Triangle {
public:
	isosceles_t(std::string n, int a, int b, int c, int A, int B, int C) : Triangle(n, a, b, c, A, B, C) {
		n = "�������������� �����������";
		A = C;
		a = c;
		set(n, a, b, c, A, B, C);
	}
	isosceles_t() : isosceles_t("�������������� �����������", 10, 20, 30, 50, 60, 70) { ; }
};