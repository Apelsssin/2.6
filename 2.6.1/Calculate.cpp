#include "Calculate.h"
int addition(int x, int y) { return x + y; }
int subsraction(int x, int y) { return x - y; }
int multiplication(int x, int y) { return x * y; }
double division(int x, int y) {	return x*1.0 / y; }
double exponentiation(int x, int y) {
	double z = x;
	for (int i = 0; i < y - 1; ++i) { z *= x; }
	return z;
}