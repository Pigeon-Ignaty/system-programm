#include <iostream>
#include "Operation.h"
#pragma once

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Operation p1(INT_MAX, 123);
    Operation p2(INT_MIN, -123);
    p1.addition();
    p2.addition();
    Operation p3(INT_MIN, +123);
    Operation p4(-4, +123);

    p3.subtraction();
    p4.subtraction();
    Operation p5(1234, 0);
    Operation p6(1234, 2);

    p5.division();
    p6.division();
    Operation p7(INT_MAX, 2);
    Operation p8(54, 2);
    p7.multiplication();
    p8.multiplication();
    return 0;
}
