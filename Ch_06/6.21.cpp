#include <iostream>

using namespace std;

//两个都不变，都变成常量
int is_big(const int x, const int *const y) {
    if (x > *y)
        return x;
    return *y;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << is_big(a, &b);
    return 0;
}