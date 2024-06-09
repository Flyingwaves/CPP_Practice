#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        ans.push_back(num);
    }

    for (auto it = ans.begin(); it != ans.end(); it++) {
        *it *= 2;
        cout << *it << " ";
    }

    return 0;

}