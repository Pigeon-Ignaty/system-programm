#include "figure.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

figure::figure(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	double AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double CD = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	double DA = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

	P = AB + BC + CD + DA;

	S = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x1);

}
void figure::show() {
	cout << "x1 = " << x1 << endl;
	cout << "y1 = " << y1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "y2 = " << y2 << endl;
	cout << "x3 = " << x3 << endl;
	cout << "y3 = " << y3 << endl;
	cout << "x4 = " << x4 << endl;
	cout << "y4 = " << y4 << endl;
	cout << "Периметр четырехугольника: " << P << endl;
	cout << "Площадь четырехугольника: " << S << endl;
}

bool figure::is_prug() {

	float d1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float d2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

	// Проверяем, являются ли диагонали четырехугольника равными
	if (d1 != d2) {
		return false;
	}

	return true;
}

bool figure::is_square() {
	// Вычисляем квадраты расстояний между вершинами четырехугольника
	float dist1 = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	float dist2 = pow(x3 - x2, 2) + pow(y3 - y2, 2);
	float dist3 = pow(x4 - x3, 2) + pow(y4 - y3, 2);
	float dist4 = pow(x1 - x4, 2) + pow(y1 - y4, 2);
	float dist5 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float dist6 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	if (dist1 == dist3 && dist2 == dist4 && dist1==dist4 && dist6==dist5) {
		// Проверяем, перпендикулярны ли диагонали четырехугольника

		if ((x2 - x1) * (x4 - x3) + (y2 - y1) * (y4 - y3)) {
			return true;
		}
		
	}
	return false;
}

bool figure::is_romb() {
	// Вычисляем длины сторон
	float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

	// Проверяем, являются ли все стороны равными
	if (d1 == d2 && d2 == d3 && d3 == d4) {
		// Вычисляем длины диагоналей
		float diag1 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
		float diag2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

		// проверяем, являются ли диагонали перпендикулярными
		if (d1 == d2 && ((x1 - x3) * (x2 - x4) + (y1 - y3) * (y2 - y4)) == 0) {
			return true;
		}
	}

	// Если все проверки не пройдены, то это не ромб
	return false;
}


bool figure::is_in_circle() {
	float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	float c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	float d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	float e = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	float f = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));

	// Проверяем, являются ли все диагонали равными
	if (a == b && b == c && c == d && e == f) {
		return true;
	}
	else {
		return false;
	}
}
bool figure::is_out_circle() {
	// вычисляем длины всех сторон четырехугольника
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

	// находим длины диагоналей
	float d1 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
	float d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	// проверяем, являются ли диагонали равными
	return (d1 == d2);
}
