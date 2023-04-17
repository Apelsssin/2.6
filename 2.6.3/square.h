#pragma once
#include <iostream>
#include "rectangle.h"
class square : public rectangle {
public:

	square(std::string n, int a, int b, int c, int d, int A, int B, int C, int D) : rectangle(n, a, b, c, d, A, B, C, D) {
		n = "квадрат";
		b = a;
		c = a;
		d = a;
		A = 90;
		B = A;
		C = A;
		D = A;
		set(n, a, b, c, d, A, B, C, D);
	}

	square() : square("квадрат", 10, 20, 30, 40, 50, 60, 70, 80) { ; }
};