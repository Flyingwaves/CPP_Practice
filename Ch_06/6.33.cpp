#include <iostream>
#include <vector>

using namespace std;

void print_vec(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
    if (beg == end)  return;
    cout << *beg++ << " ";
    print_vec(beg, end);
}
int main()
{
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    print_vec(vec.begin(), vec.end());
    return 0;
}