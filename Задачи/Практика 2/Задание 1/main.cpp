
#include <iostream>
#include "triangle.h"
using namespace std;
void main() {
	setlocale(LC_ALL, "Russian");
	Triangle t[3];
	int a1, b1, c1;
	for (int i = 1; i < 4;i++) {
		cout << "Введите стороны треугольника " << i << "" << endl;
		cout << "a = ";
		cin >> a1;
		cout << "b = ";
		cin >> b1;
		cout << "c = ";
		cin >> c1;
		t[i-1].set(a1, b1, c1);
		if (!t[i-1].exst_tr()) {
			cout << "Треугольника не существует. Введите данные снова" << endl;
			i--;
		}
	}
	for (int i = 1; i < 4; i++) {
		cout << "Площадь треугольника " << i << ": " << t[i - 1].square() << endl;
		cout << "Периметр треугольника " << i << ": " << t[i - 1].perimetr() << endl;

	}


}
