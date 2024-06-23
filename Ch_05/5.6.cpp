#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    string lettergrade;
    int grade;

    //�������еķ�֧��䶼�ʺ�����������������������������Ӱ���Ķ�
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