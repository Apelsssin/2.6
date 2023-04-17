#pragma once
#include <iostream>
#include "parallelogram.h"
class rhombus : public parallelogram {
public:
	rhombus(std::string n, int a, int b, int c, int d, int A, int B, int C, int D) : parallelogram(n, a, b, c, d, A, B, C, D) {
		n = "ромб";
		a = c;
		b = c;
		d = c;
		C = A;
		D = B;
		set(n, a, b, c, d, A, B, C, D);
	}
	rhombus() : rhombus("ромб", 10, 20, 30, 40, 50, 60, 70, 80) { ; }
};