#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ia[10];
    vector<int> va = { 2, 4, 76, 36, 9, 3, 76, 123, 65, 432 };
    
    for (int i = 0; i < 10; i++)
        ia[i] = va[i];

    for (auto c : ia)
        cout << c << " ";

    return 0;
}