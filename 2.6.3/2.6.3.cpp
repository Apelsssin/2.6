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
void print(Figure* adress) {
	adress->print();
}
int main() {
	setlocale(LC_ALL, "Russian");
	Triangle tri;
	Triangle* tri_q = &tri;
	print(tri_q);
	right_t rig;
	Triangle* rig_q = &rig;
	print(rig_q);
	isosceles_t iso;
	Triangle* iso_q = &iso;
	print(iso_q);
	equilateral_t equ;
	Triangle* equ_q = &equ;
	print(equ_q);
	Quadrangle qua;
	Quadrangle* qua_q = &qua;
	print(qua_q);
	parallelogram par;
	Quadrangle* par_q = &par;
	print(par_q);
	rectangle rec;
	Quadrangle* rec_q = &rec;
	print(rec_q);
	square sq;
	Quadrangle* sq_q = &sq;
	print(sq_q);
	rhombus rho;
	Quadrangle* rho_q = &rho;
	print(rho_q);
}