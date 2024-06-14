#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ia[] = { 2, 3, 4, 5, 1, 56 };
    vector<int> va(begin(ia), end(ia));
    vector<int> vb(ia + 1, ia + 5);

    for (auto c : va)
        cout << c << " ";
    cout << endl;

    for (auto c : vb)
        cout << c << " ";

    return 0;

}