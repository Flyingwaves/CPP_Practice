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

    for (auto x : arr)
        cout << x << " ";

    return 0;
}