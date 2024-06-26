#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, ans, pre;
    int cnt = 0, maxcnt = 0;

    while (cin >> s) {
        if (s != pre) {
            cnt = 1;
        }
        else {
            cnt++;
        }
        if (cnt > maxcnt) {
            maxcnt = cnt;
            ans = s;
        }
        pre = s;
    }
    
    if (maxcnt > 1)
        cout << ans << " counts " << maxcnt << endl;
    else
        cout << "no such word" << endl;

    return 0;
}