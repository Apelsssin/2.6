#pragma once
#include <iostream>
#include "Quadrangle.h"
class parallelogram : public Quadrangle {
public:
	parallelogram() : parallelogram(10, 20, 50, 60) { ; }
	parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
		name = "ֿאנאככוכמדנאלל";
	}
};