#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            auto it = scores.begin() + grade / 10;
            (*it)++;    //这个()不可少阿
        }
    }
    
    for (auto c : scores)
        cout << c << " ";
    return 0;
}
