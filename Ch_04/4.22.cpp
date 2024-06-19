#include <iostream>
#include <string>

using namespace std;

int main()
{
    string finalgrade;
    int grade;
    cin >> grade;

    finalgrade = (grade > 90) ? "high pass"
                : (grade > 75) ? "pass"
                : (grade > 60) ? "low pass" : "fail";

    cout << finalgrade;
    /*cout << (~'q' << 6);*/

    return 0;
            
}