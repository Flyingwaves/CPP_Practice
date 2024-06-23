#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    string lettergrade;
    int grade;

    //不是所有的分支语句都适合条件运算符，而且条件运算符多了影响阅读
    while (cin >> grade) {
        if (grade < 60) {
            lettergrade = scores[0];
        }
        else {
            lettergrade = scores[(grade - 50) / 10];
            if (grade != 100) {
                grade % 10 > 7 ? lettergrade += "+" :
                    grade % 10 < 3 ? lettergrade += "-": lettergrade += "";
            }

        }
        cout << lettergrade << " ";
    }


    return 0;
}