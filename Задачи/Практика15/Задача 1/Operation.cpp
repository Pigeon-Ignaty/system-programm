#pragma once
#include "Operation.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;
Operation::Operation(int a, int b) {
	this->a = a;
	this->b = b;
}
int Operation::addition() {
    try {
        int result = ((a > 0) && (b > 0) && (a > INT_MAX - b)) ||
            ((a < 0) && (b < 0) && (a < INT_MIN - b)) ?
            throw overflow_error("������������") : a + b;
        cout << "���������: " << result << endl;
    }
    catch (overflow_error& e) {
        cout << "������: " << e.what() << endl;
        return 0;
    }

    return result;
}
int Operation::subtraction() {
    try {
        int result = ((a > 0) && (b < 0) && (a > INT_MAX + b)) ||
            ((a < 0) && (b > 0) && (a < INT_MIN + b)) ?
            throw overflow_error("������������") : a - b;
        cout << "���������: " << result << endl;
    }
    catch (overflow_error& e) {
        cout << "������: " << e.what() << endl;
        return 0;
    }

    return result;
}
int Operation::division() {
    try {
        if (b == 0) {
            throw runtime_error("������� �� 0"); // ������� ����������
        }
        result = a / b;
        cout << "���������: " << result << endl;
        return result;

    }
    catch (runtime_error& e) {
        cout << "������: " << e.what() << endl;
        return 0;

    }
}

int Operation::multiplication() {
    try {
        int result = ((a > 0 && b > 0 && a > INT_MAX / b) ||
            (a > 0 && b < 0 && b < INT_MIN / a) ||
            (a < 0 && b > 0 && a < INT_MIN / b) ||
            (a < 0 && b < 0 && a < INT_MAX / b)) ?
            throw overflow_error("������������") : a * b;
        cout << "���������: " << result << endl;
    }
    catch (overflow_error& e) {
        cout << "������: " << e.what() << endl;
        return 0;
    }

    return result;
}
