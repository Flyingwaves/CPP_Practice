#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> list) {
    int res = 0;
    for (auto beg = list.begin(); beg != list.end(); ++beg)
        res += *beg;

    return res;
}

int main()
{
    auto arr = { 4, 6, 87, 93, 6, 983 };
    cout << sum(arr);

    return 0;
}


