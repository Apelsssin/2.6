#pragma once
#include "Triangle.h"
class right_t : public Triangle {
public:
	right_t(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
		name = "Прямоугольный треугольник";
	}
	right_t() : right_t(10, 20, 30, 50, 60) { ; }
};