#include "triangle.h"
#include <iostream>
using namespace std;

	bool Triangle::exst_tr() {
		if (a + b > c && b + c > a && a + c > b) {
			return true;
		}
		else return false;
	};
	void Triangle::set(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}
	void Triangle::show() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;


	}
	double Triangle::perimetr() {
		return a + b + c;
	}
	double Triangle::square() {
		return sqrt((perimetr() / 2) * (perimetr() / 2 - a) * (perimetr() / 2 - b) * (perimetr() / 2 - c));
	}


