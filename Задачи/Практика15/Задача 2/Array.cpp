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
		cout << "Введите количество чисел " << endl;
		cin >> count;
	}
	cout << "Введите сами числа " << endl;
	for (int i = 0; i < count; i++) {
		cin >> num;
		a.push_back(num);
	}
	cout << "Содержимое массива " << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	} 
}

bool Array::add() {
	cout << "Добавление элементов" << endl;

	int count = 0;
	int num = 0;
	while (count <= 0) {
		cout << "Введите количество чисел " << endl;
		cin >> count;
	}
	cout << "Введите сами числа " << endl;
	for (int i = 0; i < count; i++) {
		cin >> num;
		a.push_back(num);
	}
	cout << "Содержимое массива " << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}


bool Array::remove(int index) {
	cout << "Удаление элемента" << endl;
	try {
		if (index >= a.size()) {
			throw out_of_range("Индекс находится за пределами массива");
		}
		a.erase(a.begin() + index);
		cout << "Элемент " << index << " удалён" << endl;
		return true;
	}
	catch (const out_of_range& e) {
		cerr << "ошибка: " << e.what() << endl;
		return false;
	}
}

bool Array::show(int index) {
	cout << "Вывести элемент" << endl;

	try {
		if (index >= a.size()) {
			throw out_of_range("Индекс находится за пределами массива");
		}
		cout << "Элемент по индексу " << index << " = " << a[index] << endl;
	}
	catch (const out_of_range& e) {
		cerr << "Ошибка: " << e.what() << endl;
	}
	return 0;
}