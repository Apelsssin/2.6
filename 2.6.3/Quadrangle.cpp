#include <iostream>
#include "Quadrangle.h"
std::string Quadrangle::get_name() { return name; }
int Quadrangle::get_a() { return a; }
int Quadrangle::get_b() { return b; }
int Quadrangle::get_c() { return c; }
int Quadrangle::get_d() { return d; }
int Quadrangle::get_A() { return A; }
int Quadrangle::get_B() { return B; }
int Quadrangle::get_C() { return C; }
int Quadrangle::get_D() { return D; }

void Quadrangle::print() {
	std::cout << get_name() << ":\n";
	std::cout << "Стороны: a=" << get_a() << "    b=" << get_b() << "   c=" << get_c();
	std::cout << "   d=" << get_d();
	std::cout << "\n" << "Углы: A=" << get_A() << "   B=" << get_B() << "   C=" << get_C();
	std::cout << "   D=" << get_D() << "\n";
	std::cout << "\n\n";
}