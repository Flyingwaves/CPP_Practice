#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cout;

void print_vec(vector<int> &vec) {
    for (auto it = vec.cbegin(); it != vec.cend(); it++)
        cout << *it << " ";
    cout << endl;
}

void print_vec(vector<string>& vec) {
    for (auto it = vec.cbegin(); it != vec.cend(); it++)
        cout << *it << " ";
    cout << endl;
}

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
    print_vec(v1);

    cout << "v2: ";
    print_vec(v2);

    cout << "v3: ";
    print_vec(v3);

    cout << "v4: ";
    print_vec(v4);

    cout << "v5: ";
    print_vec(v5);

    cout << "v6: ";
    print_vec(v6);

    cout << "v7: ";
    print_vec(v7);

    return 0;
}