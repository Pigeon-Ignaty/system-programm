#include <iostream>
#include "cone.h"
#include <vector>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    //cone c1;
    //cone c2(5, 5);
    //cone c3(1, 1, 1, 10, 10);

    //c1.set_cone(5, 5, 5, 7, 8);
    //c2.get_cone();
    //cout << "Площадь: " << c1.square() << endl;
    //cout << "Объём: " << c1.volume() << endl << endl;

    //cout << "Площадь: " << c2.square() << endl;
    //cout << "Объём: " << c2.volume() << endl << endl;

    //cout << "Площадь: " << c3.square() << endl;
    //cout << "Объём: " << c3.volume() << endl << endl;


    Truncated_cone s1(0,0,0,5,10,7);
    cout << "Площадь: " << s1.square() << endl;
    cout << "Объём: " << s1.volume() << endl << endl;
    Truncated_cone s2(1, 3, -6, 4, 120, 37);
    cout << s2 << endl;
    Truncated_cone s3;
    cin >> s3;
    cout << s3 << endl;
    //Операторы сравнения на основе объёма конуса
    Truncated_cone s4(0, 0, 0, 5, 5, 5);
    Truncated_cone s5(0, 0, 0, 3, 4, 6);
    cout << "Площадь s4 " << s4.volume() << endl;
    cout << "Площадь s5 " << s5.volume() << endl;
    if (s4 == s5) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    if (s4 != s5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    if (s4 > s5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    if (s4 >= s5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    if (s4 < s5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    if (s4 <= s5) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }


    return 0;
}