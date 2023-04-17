#include "Triangle.h"

	void Triangle::set(std::string n, int aa, int bb, int cc, int AA, int BB, int CC) {
		name = n;
		a = aa;
		b = bb;
		c = cc;
		A = AA;
		B = BB;
		C = CC;
	}
	std::string Triangle::get_name() { return name; }
	int Triangle::get_a() { return a; }
	int Triangle::get_b() { return b; }
	int Triangle::get_c() { return c; }
	int Triangle::get_A() { return A; }
	int Triangle::get_B() { return B; }
	int Triangle::get_C() { return C; }
