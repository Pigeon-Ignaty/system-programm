#include <iostream>
#include "cone.h"
#include <vector>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    cone c1;
    cone c2(5, 5);
    cone c3(1, 1, 1, 10, 10);

    c1.set_cone(5, 5, 5, 7, 8);
    c2.get_cone();
    cout << "Площадь: " << c1.square() << endl;
    cout << "Объём: " << c1.volume() << endl << endl;

    cout << "Площадь: " << c2.square() << endl;
    cout << "Объём: " << c2.volume() << endl << endl;

    cout << "Площадь: " << c3.square() << endl;
    cout << "Объём: " << c3.volume() << endl << endl;
    return 0;
}