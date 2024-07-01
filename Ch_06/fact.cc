#include "Chapter6.h"
#include <iostream>

using namespace std;

int fact(int x) {
    if (x % 2 == 0)
        return 2 * x;
    
    return x;
}

int fac(int x) {
    if (x == 1)  return 1;
    return x * fac(x - 1);
}