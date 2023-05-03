#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

class Operation {
    int a, b, result;

public:
    Operation(int a, int b);
    int addition();
    int subtraction();
    int division();
    int multiplication();

};
