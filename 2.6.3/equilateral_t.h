#pragma once
#include "isosceles_t.h"
class equilateral_t : public isosceles_t {
public:
	equilateral_t(int a) : isosceles_t(a, a, 60, 60) {
		name = "Равносторонний треугольник";
	}
	equilateral_t() : equilateral_t(10) { ; }
};