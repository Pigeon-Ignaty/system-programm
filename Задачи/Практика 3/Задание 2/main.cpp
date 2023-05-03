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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Введите числитель для объекта " << i + 1 << ": " << endl;
        cin >> a;
        cout << "Введите знаменатель для объекта " << i + 1 << ": " << endl;
        cin >> b;
        objects.push_back(rational(a, b));
    }
    for (int i = 0; i < objects.size(); i++) {
        objects[i].show();
    }
    rational r(5,2);
    r.show();
    r.set(125, 25);
    r.show();

    return 0;
}