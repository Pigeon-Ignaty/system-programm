#include <iostream>
#include "template.h"
#pragma once

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Set<int> r(5);
    //r.Add(1);
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(1);
    r.show();
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(1);
    r.show();
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(2);
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(3);
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(4);
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(5);
    cout << "Массив пустой ? " << r.IsEmpty() << endl;
    cout << "Массив заполнен ? " << r.IsFull() << endl;
    r.Add(6);
    
    cout << "Есть элемент ? " << r.InSet(5) << endl;
    cout << "Извлечь " << r.Get(3) << endl;
    r.show();
    
    //r.show();
    Set<int> s1(3);
    s1.Add(1);
    s1.Add(2);
    s1.Add(3);
    Set<int> s2(3);
    s2.Add(2);
    s2.Add(3);
    s2.Add(4);
    s1 + s2; //  чтобы присвоить результат объединения, нужно перегрузить =
    s1 * s2;
    cout << "оператор <= вернул " << (s1 <= s2) << endl;
    Set<int> s3(3);
    s3.Add(1);
    s3.Add(2);
    s3.Add(3);
    Set<int> s4(5);
    s4.Add(1);
    s4.Add(2);

    cout << "оператор <= вернул " << (s3 <= s4) << endl;

    return 0;
}
