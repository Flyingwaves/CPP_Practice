#include <iostream>

using namespace std;

int main()
{
    int ia[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int* last = end(ia);

    for (int* p = ia; p != last; p++)
        *p = 0;

    /*for (int* p = ia; p != last; p++)
        cout << *p << endl;*/
    for (int i = 0; i < 9; i++)
        cout << ia[i] << endl;

    return 0;
}