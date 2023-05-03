#include "eq2.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

eq2::eq2(double a1, double b1, double c1) {
	this->a = a1;
	this->b = b1;
	this->c = c1;
	D = pow(b, 2) - 4 * a * c;

}
void eq2::set(double a1, double b1, double c1) {
	this->a = a1;
	this->b = b1;
	this->c = c1;
	D = pow(b, 2) - 4 * a * c;
}
double eq2::find_X() {
	if (D < 0) {
		cout << "Корней нет" << endl;
		return 0;
	}
	if (D == 0) {
		cout << "Один корень: " << -b / 2 * a << endl;
		return -b / 2 * a;

	}
	else {
		double x1 = (-b - sqrt(D)) / (2 * a);
		double x2 = (-b + sqrt(D)) / (2 * a);
		if (x1 > x2) {
			cout << "Наибольший корень: " << x1 << endl;
			return x1;
		}
		else {
			cout << "Наибольший корень: " << x2 << endl;
			return x2;
		}
	}
	
}
double eq2::find_Y(double x1) {
	cout << "y:= " << a * pow(x1, 2) + b * x1 + c << endl;
	return a * pow(x1, 2) + b * x1 + c;
}
eq2 eq2::operator+(const eq2& other) {
	double A = this->a + other.a;
	double B = this->b + other.b;
	double C = this->c + other.c;
	cout << "A = "<< A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl;
	return eq2(A, B, C);

}