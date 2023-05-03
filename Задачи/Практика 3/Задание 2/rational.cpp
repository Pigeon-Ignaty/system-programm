#include "rational.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;
int rational::gcd_function(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd_function(b, a % b);
}

rational::rational(int a1, int b1) {
	if (a1 < 0) {
		cerr << "Ошибка: числитель меньше нуля!" << endl;
		while (a1 < 0) {
			cout << "Введите a1" << endl;
			cin >> a1;
		}
	}
	
	if (b1 <= 0 ) {
		cerr << "Ошибка: знаменатель меньше или равен нулю!" << endl;
		while (b1 <= 0) {
			cout << "Введите b1" << endl;
			cin >> b1;
		}
	}
	
	if (a1 == b1) {
		 cout << "Дробь поделилась на целую часть и = 1" << endl;
		 a = 0;
		 b = 0;
	}
		
	else if (a1 > b1) {
		int whole_part = a1 / b1;
		int fractional_part = a1 % b1;
		if (fractional_part == 0) {
			cout << "Дробь поделилась на целую часть = " << whole_part << endl;

			this->a = a1 / b1;
			this->b = 1;
		}
		else{
		cout << "Получена новая рациональная дробь: " << a1 << "/" << b1 << " = ("
			<< whole_part << " + " << fractional_part << "/" << b1 << ")" << endl;
		a1 = fractional_part;

		int gcd = gcd_function(a1, b1);
		this->a = a1 / gcd;
		this->b = b1 / gcd;
		}
		
	}

	else {
		int gcd = gcd_function(a1, b1);
		a = a1 / gcd;
		b = b1 / gcd;
	}
	
}
void rational::set(int a1, int b1) {
	if (a1 < 0) {
		cerr << "Ошибка: числитель меньше нуля!" << endl;
		while (a1 < 0) {
			cout << "Введите a1" << endl;
			cin >> a1;
		}
	}

	if (b1 <= 0) {
		cerr << "Ошибка: знаменатель меньше или равен нулю!" << endl;
		while (b1 <= 0) {
			cout << "Введите b1" << endl;
			cin >> b1;
		}
	}

	if (a1 == b1) {
		cout << "Дробь поделилась на целую часть и = 1" << endl;
		a = 0;
		b = 0;
	}

	else if (a1 > b1) {
		int whole_part = a1 / b1;
		int fractional_part = a1 % b1;
		if (fractional_part == 0) {
			cout << "Дробь поделилась на целую часть = " << whole_part << endl;

			this->a = a1 / b1;
			this->b = 1;
		}
		else {
			cout << "Получена новая рациональная дробь: " << a1 << "/" << b1 << " = ("
				<< whole_part << " + " << fractional_part << "/" << b1 << ")" << endl;
			a1 = fractional_part;
			this->a = fractional_part;
			this->b = b1;
		}

	}

	else {
		int gcd = gcd_function(a1, b1);
		a = a1 / gcd;
		b = b1 / gcd;
	}

}
void rational::show() {
	cout << "Дробь: " << this->a << "/" << this->b << endl;
	
}
