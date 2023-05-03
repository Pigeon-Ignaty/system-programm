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
    // Вычисляем расстояния между точками (x,y) и каждой вершиной треугольника
    double d1 = sqrt(pow(x_center - 0, 2) + pow(y_center - 0, 2));
    double d2 = sqrt(pow(x_center - a, 2) + pow(y_center - 0, 2));
    double d3 = sqrt(pow(x_center - (a - c * cos(asin(b / c))), 2) + pow(y_center - (c * sin(asin(b / c))), 2));
    // Если любое из этих расстояний больше радиуса, то треугольник не вписывается в окружность
    if (d1 > radius || d2 > radius || d3 > radius) {
        return false;
    }
    // Иначе, если все расстояния меньше или равны радиусу, то треугольник вписывается в окружность
    return true;
}
bool circle::triangle_around(float a, float b, float c){
    // Вычисляем радиус вписанной окружности
    double p = (a + b + c) / 2;
    double r_inscribed = sqrt(((p - a) * (p - b) * (p - c)) / p);

    // Проверяем, если радиус описанной окружности больше или равен радиусу данной окружности,
    // то окружность можно описать вокруг треугольника, иначе - нельзя
    if (r_inscribed <= radius) {
        return true;
    }
    else {
        return false;
    }
}


bool circle::check_circle(float x_cntr, float y_cntr, float r) {
    // Вычисляем расстояние между центрами окружностей
    double d = sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2));
    // Если расстояние меньше или равно сумме радиусов, то окружности пересекаются
    if (d <= radius + r) {
        return true;
    }
    // Иначе они не пересекаются
    return false;
}
