#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b) {
        if (b == 0)
            throw runtime_error("second number is zero");
        cout << a / b << endl;
    }

    return 0;
}