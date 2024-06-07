#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("I am a good boy");
    for (auto &c : s) {
        c = 'X';
    }

    cout << s << endl;
    return 0;
}