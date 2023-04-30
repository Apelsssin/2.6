#include "Figure.h"
int Figure::get_sides() { return sides; }
std::string Figure::get_name() { return name; }
 void Figure::print() {
	std::cout << Figure::get_name() << ":\n";
	std::cout << "\n\n";
}