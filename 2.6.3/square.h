#pragma once
#include <iostream>
#include "rectangle.h"
class square : public rectangle {
public:

	square(int a) : rectangle(a, a) {
		name = " вадрат";
	}

	square() : square(10) { ; }
};