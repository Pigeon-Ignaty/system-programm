#include <iostream>
#include "figure.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");

    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Введите координаты вершин (x1,y1),(x2,y2),(x3,y3),(x4,y4)" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    figure my_figure(x1, y1, x2, y2, x3, y3, x4, y4);

    my_figure.show();

    if (my_figure.is_prug()) {
        cout << "Четырехугольник - прямоугольник" << endl;
    }
    else {
        cout << "Четырехугольник - не прямоугольник" << endl;
    }

    if (my_figure.is_square()) {
        cout << "Четырехугольник - квадрат" << endl;
    }
    else {
        cout << "Четырехугольник - не квадрат" << endl;
    }

    if (my_figure.is_romb()) {
        cout << "Четырехугольник - ромб" << endl;
    }
    else {
        cout << "Четырехугольник - не ромб" << endl;
    }

    if (my_figure.is_in_circle()) {
        cout << "Можно вписать в окружность" << endl;
    }
    else {
        cout << "Нельзя вписать в окружность" << endl;
    }

    if (my_figure.is_out_circle()) {
        cout << "В четырёхугольник может быть вписана окружность" << endl;
    }
    else {
        cout << "В четырёхугольник нельзя вписать окружность" << endl;
    }
    return 0;
}