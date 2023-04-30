#include "Triangle.h"

	int Triangle::get_a() { return a; }
	int Triangle::get_b() { return b; }
	int Triangle::get_c() { return c; }
	int Triangle::get_A() { return A; }
	int Triangle::get_B() { return B; }
	int Triangle::get_C() { return C; }
	void Triangle::print()  {
		std::cout << name << ":\n";
		std::cout << "Стороны: a=" << get_a() << "    b=" << get_b() << "   c=" << get_c();
		std::cout << "\n" << "Углы: A=" << get_A() << "   B=" << get_B() << "   C=" << get_C() << "\n";
		std::cout << "\n\n";
	}