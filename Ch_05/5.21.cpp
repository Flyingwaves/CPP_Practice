#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, pre;
    bool flag = false;
    while (cin >> s) {
        if (isupper(s[0]) && s == pre) {    //检查相等是，意味着大写情况也相同，se和Se就不相同，
                                            //注意分清题意要的是哪种
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