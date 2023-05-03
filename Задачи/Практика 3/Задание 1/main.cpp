#include <iostream>
#include "eq2.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");

    double a, b, c;
    cout << "Введите a, b, c" << endl;
    cin >> a >> b >> c;
    eq2 equat(a,b,c);
    cout << "Введите другие a, b, c" << endl;
    cin >> a >> b >> c;
    equat.set(a, b, c);
    equat.find_X();
    cout << "Введите x" << endl;
    int x;
    cin >> x;
    equat.find_Y(x);
    // Создание двух объектов квадратных уравнений
    eq2 e1(1, 2, 3);
    eq2 e2(2, -3, 4);
    eq2 eq = e1 + e2;
    return 0;
}