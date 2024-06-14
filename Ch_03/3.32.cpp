#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[10];
    size_t ix;
    for (ix = 0; ix < 10; ix++) {
        arr[ix] = ix;
    }

    int arr2[10];
    for (ix = 0; ix < 10; ix++) {
        arr2[ix] = arr[ix];
    }

    vector<int> v1(10);
    for (int i = 0; i < 10; i++)
        v1[i] = i;
    vector<int> v2(v1);

    for (auto x : v2)
        cout << x << " ";

    return 0;
}