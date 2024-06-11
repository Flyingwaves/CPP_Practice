#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans;
    int num;

    while (cin >> num)
        ans.push_back(num);

    vector<int>::iterator it = ans.begin();
    while (it != ans.end() - 1) {
        cout << *it + *(it + 1) << " ";
        it++;
    }
    /*for (int i = 0; i < ans.size() - 1; i++)
        cout << ans[i] + ans[i + 1] << " ";*/

    return 0;
}