#include <iostream>

using namespace std;

int main()
{
    unsigned acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    unsigned spacecnt = 0, tabcnt = 0, entercnt = 0;
    char ch;
    while (cin >> std::noskipws >> ch) {
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
        case ' ':
            spacecnt++;
            break;
        case '\t':
            tabcnt++;
            break;
        case '\n':
            entercnt++;
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
    cout << "换行符:\t" << entercnt << endl;
    cout << "制表符:\t" << tabcnt << endl;
    cout << "空格:\t" << spacecnt << endl;
    return 0;
}