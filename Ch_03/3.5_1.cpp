#include <iostream>
#include <string>

using namespace std;

int main()
{
    string res;
    string tmp;
    while (cin >> tmp) {
        res += tmp;
    }

    cout << res << endl;
    return 0;
}