#include <iostream>

using namespace std;

void reset(int& n, int k) {
    n = k;
}

int main()
{
    int a, b;
    cin >> a;
    cout << "a = " << a << endl;

    cin >> b;
    reset(a, b);
    cout << "a = " << a;

    return 0;
}