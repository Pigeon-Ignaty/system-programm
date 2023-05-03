#include <iostream>
#include "ocean.h"
#include <vector>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    cout << "ЗАЛИВ" << endl;
    Gulf g1;
    Gulf g2("Bengal", "5°32 95°12", 2191000, 1500, 15);
    Gulf g3;
   // cin >> g3; тоже самое, что и конструктор
    cout << g2 << endl;
    cout << "МОРЕ" << endl;

    Sea s1("Mediterranean", "35°N 18°E", 31443243, 1500, 20, 90);
    Sea black;
    //cin >> black; тоже самое, что и конструктор
    cout << s1 << endl;
    cout << black << endl;;
    cout << "ОКЕАН" << endl;

    Ocean atlan("Atlantic", "0°N 25°W", 106460000, 3646, 18, 180, "all", "oil and natural gas", 2);
    Ocean o1;
    //cin >> o1; тоже самое, что и конструктор
    cout << o1 << endl;
    cout << atlan << endl;;
    return 0;
}