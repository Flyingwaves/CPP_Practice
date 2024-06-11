#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ans;
    int num;

    while (cin >> num)
        ans.push_back(num);

    auto beg = ans.begin(), end = ans.end() - 1;
    auto mid = ans.begin() + (end - beg) / 2;
    //Èôend = ans.end(), Ôòmid = ans.begin() + (end - beg + 1) / 2, ÅĞ¶Ïbeg < mid

    while (beg <= mid) {
        cout << *beg + *end << " ";
        beg++;
        end--;
    }

    /*int n = ans.size();

    for (int i = 0; i < (n + 1) / 2; i++) {
        cout << ans[i] + ans[n - i - 1] << " ";
    }*/

    return 0;
}