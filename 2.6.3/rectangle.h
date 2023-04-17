#pragma once
#include <iostream>
#include "parallelogram.h"
class rectangle : public parallelogram {
public:
	rectangle() : rectangle("прямоугольник", 10, 20, 30, 40, 50, 60, 70, 80) { ; }
	rectangle(std::string n, int a, int b, int c, int d, int A, int B, int C, int D) : parallelogram(n, a, b, c, d, A, B, C, D) {
		n = "прямоугольник";
		A = 90;
		B = A;
		C = A;
		D = A;
		a = c;
		b = d;
		set(n, a, b, c, d, A, B, C, D);
	}
};