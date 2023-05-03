#include "cone.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

cone::cone() {
	x = y = z = R_big = h = 0;
}

cone::cone(int r1, int h1) {
	x = y = z = 0;
	R_big = r1;
	h = h1;
}

cone::cone(int x1, int y1, int z1, int r1, int h1) {
	x = x1;
	y = y1;
	z = z1;
	R_big = r1;
	h = h1;
}
void cone::set_cone(int x1, int y1, int z1, int r1, int h1) {
	x = x1;
	y = y1;
	z = z1;
	R_big = r1;
	h = h1;
}

void cone::get_cone() {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "r = " << R_big << endl;
	cout << "h = " << h << endl;
}
double cone::square() {
	return pi * R_big *(R_big + sqrt((R_big * R_big) + (h * h)));
}

double cone::volume() {
	return h*pi* R_big * R_big /3;
}
Truncated_cone::Truncated_cone() {
	x = y = z = R_big = h = r_small = 0;

}
Truncated_cone::Truncated_cone(int R1, int r1,  int h1) {
	x = y = z = 0;
	r_small = r1;
	R_big = R1;
	h = h1;
}
Truncated_cone::Truncated_cone(int x1, int y1, int z1, int R1, int r1, int h1) {
	x = x1;
	y = y1;
	z = z1;
	r_small = r1;
	R_big = R1;
	h = h1;
}
double Truncated_cone::square() {
	double l = sqrt(h * h + pow((R_big - r_small), 2));
	S = pi * (l * R_big + l * r_small + R_big * R_big + r_small * r_small);
		return pi * (l * R_big + l * r_small + R_big * R_big + r_small * r_small);
}

double Truncated_cone::volume() {
	V = (pi * h * (pow(r_small, 2) + r_small * R_big + pow(R_big, 2))) / 3;
	return (pi * h * (pow(r_small, 2) + r_small * R_big + pow(R_big, 2))) / 3;
}
ostream& operator<<(ostream& os, const Truncated_cone& ob) {
	os << "Координата x: " << ob.x << endl;
	os << "Координата y: " << ob.y << endl;
	os << "Координата z: " << ob.z << endl;
	os << "Радиус нижнего основания: " << ob.R_big << endl;
	os << "Радиус верхнего основания: " << ob.r_small << endl;
	os << "Высота: " << ob.h << endl;
	return os;
}

istream& operator>>(istream& is, Truncated_cone& ob) {
	cout << "Введите x:" << endl;
	is >> ob.x;
	cout << "Введите y:" << endl;
	is >> ob.y;
	cout << "Введите z:" << endl;
	is >> ob.z;
	cout << "Введите радиус нижнего основания" << endl;
	is >> ob.R_big;
	cout << "Введите радиус верхнего основания" << endl;
	is >> ob.r_small;
	cout << "Введите высоту" << endl;
	is >> ob.h;
	return is;

}

bool Truncated_cone::operator==(const Truncated_cone& other) const {
	return V == other.V;
}

bool Truncated_cone::operator!=(const Truncated_cone& other) const {
	return V != other.V;

}

bool Truncated_cone::operator<(const Truncated_cone& other) const {
	return V < other.V;

}
bool Truncated_cone::operator>(const Truncated_cone& other) const {
	return V > other.V;
}
bool Truncated_cone::operator<=(const Truncated_cone& other) const {
	return V <= other.V;

}

bool Truncated_cone::operator>=(const Truncated_cone& other) const {
	return V >= other.V;
}