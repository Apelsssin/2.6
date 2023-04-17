#pragma once
#include <iostream>
class Figure {
protected:
	std::string name;
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
public:
	Figure() {
		name = "Фигура";
		a = 0;
		b = 0;
		c = 0;
		A = 0;
		B = 0;
		C = 0;
	}
};