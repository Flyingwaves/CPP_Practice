#include <iostream>
#include <string>

using namespace std;

bool is_contain(const string& s) {
    for (auto c : s) {
        if (isupper(c))  return true;
    }
    return false;
}

void to_lower(string& s) {
    for (auto& c : s) {
        c = tolower(c);
    }
}
int main()
{
    string s1;
    cin >> s1;
    const string s2 = s1;
    
    if (is_contain(s2))
        cout << "含有大写字母" << endl;
    else cout << "不含有大写字母" << endl;

    to_lower(s1);
    cout << s1;
    return 0;
}