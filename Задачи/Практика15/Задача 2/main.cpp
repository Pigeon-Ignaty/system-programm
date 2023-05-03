#include <iostream>
#include "Array.h"
#pragma once

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Array a;
    a.add();
    a.remove(99);
    a.show(5);
    return 0;
}
