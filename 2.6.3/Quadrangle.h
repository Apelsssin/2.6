#pragma once
#include "Figure.h"
class Quadrangle : public Figure {
protected:
	int d;
	int D;
public:
	Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) {
		this->name = "���������������";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	Quadrangle() : Quadrangle("���������������", 10, 20, 30, 40, 50, 60, 70, 80) { ; }
	void set(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);
	std::string get_name();
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
};