#include "rational.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

rational::rational(int a1, int b1) {
	if (b1 == 0) {
		cerr << "������: ����������� �� ����� ���� ����� ����!" << endl;
		while (b1 == 0) {
			cout << "������� b1" << endl;
			cin >> b1;
		}
	}
	if (a1 == 0) {
		cout << "����� ����� 0" << endl;
		exit(1);

	}
	if (a1 == b1) {
		 cout << "����� ���������� �� ����� ����� � = 1" << endl;
		 exit(1);
	}
	if (abs(a1) < abs(b1) && abs(a1) % abs(b1) != 0) {
		this->a = a1;
		this->b = b1;
	}

	else if (abs(a1) > abs(b1)) {
		int whole_part = a1 / b1;
		int fractional_part = a1 % b1;
		if (fractional_part == 0) {
			cerr << "����� ���������� �� ����� ����� = " << whole_part;
			exit(1);
		}
		else{
		cout << "�������� ����� ������������ �����: " << a1 << "/" << b1 << " = ("
			<< whole_part << " + " << fractional_part << "/" << b1 << ")" << endl;
		a1 = fractional_part;

		}
		this->a = a1;
		this->b = b1;
	}
	else if (abs(b1) / abs(a1) > 0) {
		int fractional_part = a1 % b1;
		b1 = b1 / fractional_part;
		a1 = a1 / fractional_part;
		this->a = a1;
		this->b = b1;
	}
	
}
void rational::set(int a1, int b1) {
	if (b1 == 0) {
		cerr << "������: ����������� �� ����� ���� ����� ����!" << endl;
		while (b1 == 0) {
			cout << "������� b1" << endl;;
			cin >> b1;
		}
	}
	if (a1 == 0) {
		cout << "����� ����� 0" << endl;
		exit(1);

	}
	if (a1 == b1) {
		cout << "����� ���������� �� ����� ����� � = 1" << endl;
		exit(1);
	}
	if (abs(a1) > abs(b1)) {
		int whole_part = a1 / b1;
		int fractional_part = a1 % b1;
		if (fractional_part == 0) {
			cerr << "����� ���������� �� ����� ����� = " << whole_part;
			exit(1);
		}
		else {
			cout << "�������� ����� ������������ �����: " << a1 << "/" << b1 << " = ("
				<< whole_part << " + " << fractional_part << "/" << b1 << ")" << endl;
			a1 = fractional_part;

		}
	}
	if (abs(b1) / abs(a1) > 0) {
		int fractional_part = a1 % b1;
		b1 = b1 / fractional_part;
		a1 = a1 / fractional_part;
	}
	this->a = a1;
	this->b = b1;
}
void rational::show() {
	if(a*b>0)
	cout << "�����: " << this->a << "/" << this->b << endl;
	else {
		cout << "�����: -" << abs(this->a) << "/" << abs(this->b) << endl;

	}
}

rational operator-(const rational& o1, const rational& o2) {
	double A = o1.a * o2.b - o1.b * o2.a;
	double B = o1.b * o2.b;
	cout << A << "/" << B << endl;
	return rational(A, B);
}
rational& rational::operator++() {
	a = a + b;
	cout << a << "/" << b << endl;
	//a
	// ���������� *this, ����� ���������� ����������� ������� ��������
	return *this;
	
}
bool rational::operator==(const rational& o1) {
	double A1 = this->a * o1.b;
	double A2 = this->b * o1.a;
	double B = this->b * o1.b;
	if (A1 == A2) {
		cout << "����� �����" << endl;
		return true;
	}
	else { cout << "����� �� �����" << endl;
	return false;
	}

}
bool rational::operator>(const rational& o1) {
	double A1 = this->a * o1.b;
	double A2 = this->b * o1.a;
	double B = this->b * o1.b;
	if (A1 > A2) { 
		cout << "����� " << this->a << "/" << this->b << " ������ " << endl;
	return true;

	}
	else if (A1 < A2) {
		cout << "����� " << o1.a << "/" << o1.b << " ������ " << endl;
		return false;
	};
	return false;

}

void rational::operator=(const rational& o1) {
	this->a = o1.a;
	this->b = o1.b;
	cout << this->a << endl;
	cout << this->b << endl;

}