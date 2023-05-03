#include <iostream>
#include "MySet.h"
#pragma once

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // добавлены try catch в Get()
    Set<int> s(5);
    s.Add(1);
    s.Add(2);
    s.Add(3);
    s.Add(4);
    s.Add(5);
    s.Get(10); //ошибка при получении элемента 10
    return 0;
}
