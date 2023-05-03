#include "cone.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

cone::cone() {
	x = y = z = r = h = 0;
}

cone::cone(int r1, int h1) {
	x = y = z = 0;
	r = r1;
	h = h1;
}

cone::cone(int x1, int y1, int z1, int r1, int h1) {
	x = x1;
	y = y1;
	z = z1;
	r = r1;
	h = h1;
}
void cone::set_cone(int x1, int y1, int z1, int r1, int h1) {
	x = x1;
	y = y1;
	z = z1;
	r = r1;
	h = h1;
}

void cone::get_cone() {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "r = " << r << endl;
	cout << "h = " << h << endl;
}
double cone::square() {
	return pi * r*(r + sqrt((r * r) + (h * h)));
}

double cone::volume() {
	return h*pi*r*r/3;
}