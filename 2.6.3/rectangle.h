#pragma once
#include <iostream>
#include "parallelogram.h"
class rectangle : public parallelogram {
public:
	rectangle() : rectangle(10, 20) { ; }
	rectangle(int a, int b) : parallelogram(a, b, 90, 90) {
		name = "�������������";
	}
};