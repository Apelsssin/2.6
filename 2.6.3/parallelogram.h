#pragma once
#include <iostream>
#include "Quadrangle.h"
class parallelogram : public Quadrangle{
public:
	parallelogram() : parallelogram("��������������", 10, 20, 30, 40, 50, 60, 70, 80) { ; }
	parallelogram(std::string n, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(n, a, b, c, d, A, B, C, D) {
		n = "��������������";
		a = c;
		b = d;
		A = C;
		B = D;
		set(n, a, b, c, d, A, B, C, D);
	}
};