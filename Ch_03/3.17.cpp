#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> ans;
    string word;

    while (cin >> word) {
        for (auto &c: word) {
            c = toupper(c);
        }
        ans.push_back(word);
    }

    for (auto s : ans) {
        cout << s << endl;
    }
    return 0;
}