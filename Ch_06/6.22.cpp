#include <iostream>

using namespace std;

//Ҫ�����ã����򽻻��˸���į
void swap_ptr(int*& p, int*& q) {
    int* tmp = p;
    p = q;
    q = tmp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int* p = &a, * q = &b;
    
    cout << *p << " " << *q << endl;
    swap_ptr(p, q);
    cout << *p << " " << *q << endl;

    return 0;
}