#include <iostream>

using namespace std;

//���������䣬����ɳ���
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