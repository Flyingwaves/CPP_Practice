#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    char ca[] = "good day";
    char cb[] = "nice eve";
    
    if (s1 < s2)
        cout << "s1 < s2" << endl;
    else if (s1 == s2)
        cout << "s1 == s2" << endl;
    else
        cout << "s1 > s2" << endl;

    if (strcmp(ca, cb) < 0)
        cout << "ca < cb" << endl;
    else if (strcmp(ca, cb) == 0)
        cout << "ca == cb" << endl;
    else
        cout << "ca > cb" << endl;

    return 0;
}