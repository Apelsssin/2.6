#include <iostream>
#include "Quadrangle.h"
	void Quadrangle::set (std::string n, int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) {
		name = n;
		a = aa;
		b = bb;
		c = cc;
		d = dd;
		A = AA;
		B = BB;
		C = CC;
		D = DD;
	}
	std::string Quadrangle::get_name() { return name; }
	int Quadrangle::get_a() { return a; }
	int Quadrangle::get_b() { return b; }
	int Quadrangle::get_c() { return c; }
	int Quadrangle::get_d() { return d; }
	int Quadrangle::get_A() { return A; }
	int Quadrangle::get_B() { return B; }
	int Quadrangle::get_C() { return C; }
	int Quadrangle::get_D() { return D; }
