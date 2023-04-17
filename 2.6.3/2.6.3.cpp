#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "parallelogram.h"
#include "Quadrangle.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"
#include "equilateral_t.h"
#include "isosceles_t.h"
#include "right_t.h"
void print1(Triangle* adress) {
	std::cout << adress->get_name() << ":\n" << "Стороны: a=" << adress->get_a() << "    b=" << adress->get_b() << "   c=" << adress->get_c();
	std::cout << "\n" << "Углы: A=" << adress->get_A() << "   B=" << adress->get_B() << "   C=" << adress->get_C();
	std::cout << "\n\n";
}
void print2(Quadrangle* adress) {
	std::cout << adress->get_name() << ":\n" << "Стороны: a=" << adress->get_a() << "    b=" << adress->get_b() << "   c=" << adress->get_c();
	std::cout << "   d=" << adress->get_d();
	std::cout << "\n" << "Углы: A=" << adress->get_A() << "   B=" << adress->get_B() << "   C=" << adress->get_C();
	std::cout << "   D=" << adress->get_D();
	std::cout << "\n\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	Triangle tri;
	Triangle* tri_q = &tri;
	print1(tri_q);
	right_t rig;
	Triangle* rig_q = &rig;
	print1(rig_q);
	isosceles_t iso;
	Triangle* iso_q = &iso;
	print1(iso_q);
	equilateral_t equ;
	Triangle* equ_q = &equ;
	print1(equ_q);
	Quadrangle qua;
	Quadrangle* qua_q = &qua;
	print2(qua_q);
	parallelogram par;
	Quadrangle* par_q = &par;
	print2(par_q);
	rectangle rec;
	Quadrangle* rec_q = &rec;
	print2(rec_q);
	square sq;
	Quadrangle* sq_q = &sq;
	print2(sq_q);
	rhombus rho;
	Quadrangle* rho_q = &rho;
	print2(rho_q);
}