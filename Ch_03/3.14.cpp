#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ans;
    int num;
    while (std::cin >> num) {
        ans.push_back(num);
    }

    for (auto c : ans) {
        std::cout << c << " ";
    }
    return 0;
}