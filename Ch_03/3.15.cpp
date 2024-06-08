#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;

int main()
{
    vector<string> res;
    string word;

    while (cin >> word) {
        res.push_back(word);
    }

    for (auto s : res)
        cout << s << " ";

    return 0;
}