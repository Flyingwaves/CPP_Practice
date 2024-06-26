#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, pre;
    bool flag = false;
    while (cin >> s) {
        if (s == pre) {
            flag = true;
            break;
        }
        pre = s;
    }

    if (flag)
        cout << s;
    else
        cout << "no word";

    return 0;
}