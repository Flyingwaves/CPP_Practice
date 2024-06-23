#include <iostream>

using namespace std;

int main()
{
    unsigned acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    char ch;
    while (cin >> ch) {
        switch (ch)
        {
        case 'a': case 'A':
            acnt++;
            break;
        case 'i': case 'I':
            icnt++;
            break;
        case 'e': case 'E':
            ecnt++;
            break;
        case 'o': case 'O':
            ocnt++;
            break;
        case 'u': case 'U':
            ucnt++;
            break;
        default:
            break;
        }
    }
    cout << "anct:\t" << acnt << endl;
    cout << "ecnt:\t" << ecnt << endl;
    cout << "icnt:\t" << icnt << endl;
    cout << "ocnt:\t" << ocnt << endl;
    cout << "ucnt:\t" << ucnt << endl;

    return 0;
}