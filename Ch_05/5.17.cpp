#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1 = { 0, 1, 1, 2 };
    vector<int> vec2 = { 0, 1, 1, 2, 3, 5, 8 };

    bool flag = true;
    auto size = min(vec1.size(), vec2.size());
    for (auto i = 0; i < size; ++i) {
        if (vec1[i] != vec2[i]) {
            flag = false;
            break;
        }

    }
    
    if (flag)
        cout << "ǰ׺��ͬ";
    else
        cout << "ǰ׺��ͬ";

    return 0;

}