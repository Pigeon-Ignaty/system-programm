#include <iostream>
#include "rational.h"
#include <vector>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    vector <rational> objects;

    /*int a, b;
    cin >> a >> b;
    rational r(a, b);
    r.show();*/
   /* int n;
    cin >> n;*/
    /*for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Введите числитель для объекта " << i + 1 << ": " << endl;
        cin >> a;
        cout << "Введите знаменатель для объекта " << i + 1 << ": " << endl;
        cin >> b;
        objects.push_back(rational(a, b));
    }
    for (int i = 0; i < objects.size(); i++) {
        objects[i].show();
    }*/
    rational r1(-1, 2);
    rational r2(1, 3);
    rational r3 = r1 + r2;
    rational r4 = r1 - r2;
    rational r5(-1, 22);
    ++r5;
    rational r6(-1, 2);
    rational r7(-2, 4);
    r6 == r7;
    rational r8(2, 3);
    rational r9(2, 4);
    r8 > r9;
    r8 = r9;
    return 0;
}