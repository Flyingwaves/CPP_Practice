#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> text;
    string sentence;
    while (getline(cin, sentence)) {
        text.push_back(sentence);
    }

    for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
        for (auto c = it->begin(); c != it->end(); c++) {
            *c = toupper(*c);
        }
        cout << *it << endl;
    }

    return 0;
}