#include <iostream>

using namespace std;

int main()
{
    unsigned acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    char ch;
    while (cin >> ch) {
        if (ch == 'a')
            acnt++;
        else if (ch == 'e')
            ecnt++;
        else if (ch == 'i')
            icnt++;
        else if (ch == 'o')
            ocnt++;
        else if (ch == 'u')
            ucnt++;
    }
    cout << "anct:\t" << acnt << endl;
    cout << "ecnt:\t" << ecnt << endl;
    cout << "icnt:\t" << icnt << endl;
    cout << "ocnt:\t" << ocnt << endl;
    cout << "ucnt:\t" << ucnt << endl;

    return 0;
}