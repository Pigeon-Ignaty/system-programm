#pragma once
#include "Array.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;
Array::Array() {
	int count =0;
	int num = 0;
	while (count <= 0) {
		cout << "������� ���������� ����� " << endl;
		cin >> count;
	}
	cout << "������� ���� ����� " << endl;
	for (int i = 0; i < count; i++) {
		cin >> num;
		a.push_back(num);
	}
	cout << "���������� ������� " << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	} 
}

bool Array::add() {
	cout << "���������� ���������" << endl;

	int count = 0;
	int num = 0;
	while (count <= 0) {
		cout << "������� ���������� ����� " << endl;
		cin >> count;
	}
	cout << "������� ���� ����� " << endl;
	for (int i = 0; i < count; i++) {
		cin >> num;
		a.push_back(num);
	}
	cout << "���������� ������� " << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}


bool Array::remove(int index) {
	cout << "�������� ��������" << endl;
	try {
		if (index >= a.size()) {
			throw out_of_range("������ ��������� �� ��������� �������");
		}
		a.erase(a.begin() + index);
		cout << "������� " << index << " �����" << endl;
		return true;
	}
	catch (const out_of_range& e) {
		cerr << "������: " << e.what() << endl;
		return false;
	}
}

bool Array::show(int index) {
	cout << "������� �������" << endl;

	try {
		if (index >= a.size()) {
			throw out_of_range("������ ��������� �� ��������� �������");
		}
		cout << "������� �� ������� " << index << " = " << a[index] << endl;
	}
	catch (const out_of_range& e) {
		cerr << "������: " << e.what() << endl;
	}
	return 0;
}