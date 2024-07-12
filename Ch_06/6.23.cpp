#include <iostream>

using namespace std;

void print_int(const int val) {
    cout << val << endl;
}
void print_array(const int* beg, const int* end) {
    while (beg != end) {
        cout << *beg++ << " ";
        //复习一下优先级
    }
}

int main()
{
    int i = 0, j[2] = { 0, 1 };
    print_int(i);
    print_array(begin(j), end(j));

    return 0;
}
