#include <iostream>
#include "7.12.h"

using namespace std;

int main()
{
    Sales_data m1;
    print(cout, m1);

    Sales_data m2("usnen");
    print(cout, m2);

    Sales_data m3("usnbv", 5, 2.3);
    print(cout, m3);

    Sales_data m4(cin);
    print(cout, m4);

    return 0;
}