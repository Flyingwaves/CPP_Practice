#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int key;
    while (cin >> key)
        vec.push_back(key);

    for (auto& c : vec)
        c & 0x1 ? c *= 2: c;

    for (auto c : vec)
        cout << c << " ";

    
    return 0;

}