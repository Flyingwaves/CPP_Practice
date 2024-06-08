#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans;
    int num;
    
    while (cin >> num)
        ans.push_back(num);

    for (int i = 0; i < ans.size() - 1; i ++)
        cout << ans[i] + ans[i + 1] << " ";

    return 0;
}