#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    cout << "v1: ";
    for (auto c : v1)
        cout << c << " ";
    cout << endl;

    cout << "v2: ";
    for (auto c : v2)
        cout << c << " ";
    cout << endl;

    cout << "v3: ";
    for (auto c : v3)
        cout << c << " ";
    cout << endl;

    cout << "v4: ";
    for (auto c : v4)
        cout << c << " ";
    cout << endl;

    cout << "v5: ";
    for (auto c : v5)
        cout << c << " ";
    cout << endl;

    cout << "v6: ";
    for (auto c : v6)
        cout << c << " ";
    cout << endl;

    cout << "v7: ";
    for (auto c : v7)
        cout << c << " ";
    cout << endl;

    return 0;
}