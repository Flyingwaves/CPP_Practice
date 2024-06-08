#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans;
    int num;

    while (cin >> num)
        ans.push_back(num);

    int n = ans.size();

    for (int i = 0; i < (n + 1) / 2; i++) {
        cout << ans[i] + ans[n - i - 1] << " ";
    }

    return 0;
}