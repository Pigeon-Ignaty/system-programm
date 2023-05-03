#include "circle.h"
#include <iostream>
#include <cmath>
const double pi = 3.14159265;

using namespace std;

circle::circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
	}
void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
	}
float circle::square() {
    return (float(pi) * radius * radius);

}


bool circle::triangle_in(double a, double b, double c) {
    // ��������� ���������� ����� ������� (x,y) � ������ �������� ������������
    double d1 = sqrt(pow(x_center - 0, 2) + pow(y_center - 0, 2));
    double d2 = sqrt(pow(x_center - a, 2) + pow(y_center - 0, 2));
    double d3 = sqrt(pow(x_center - (a - c * cos(asin(b / c))), 2) + pow(y_center - (c * sin(asin(b / c))), 2));
    // ���� ����� �� ���� ���������� ������ �������, �� ����������� �� ����������� � ����������
    if (d1 > radius || d2 > radius || d3 > radius) {
        return false;
    }
    // �����, ���� ��� ���������� ������ ��� ����� �������, �� ����������� ����������� � ����������
    return true;
}
bool circle::triangle_around(float a, float b, float c){
    // ��������� ������ ��������� ����������
    double p = (a + b + c) / 2;
    double r_inscribed = sqrt(((p - a) * (p - b) * (p - c)) / p);

    // ���������, ���� ������ ��������� ���������� ������ ��� ����� ������� ������ ����������,
    // �� ���������� ����� ������� ������ ������������, ����� - ������
    if (r_inscribed <= radius) {
        return true;
    }
    else {
        return false;
    }
}


bool circle::check_circle(float x_cntr, float y_cntr, float r) {
    // ��������� ���������� ����� �������� �����������
    double d = sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2));
    // ���� ���������� ������ ��� ����� ����� ��������, �� ���������� ������������
    if (d <= radius + r) {
        return true;
    }
    // ����� ��� �� ������������
    return false;
}
