#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("I am a good boy");
    string::size_type index = 0;

    while (index < s.size()) {
        s[index] = 'X';
        index ++;
    }

    cout << s << endl;
    return 0;
}