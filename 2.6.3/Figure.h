#pragma once
#include <iostream>
class Figure {
protected:
	std::string name;
	int sides;
public:
	int get_sides();
	std::string get_name();
	Figure() {
		name = "������";
		sides = 0;
	}
	virtual void print();
};