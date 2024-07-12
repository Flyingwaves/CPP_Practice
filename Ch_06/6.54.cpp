#include <iostream>
#include <vector>

using namespace std;

int fun1(int, int);
int fun2(int, int);

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}

int main()
{
    vector<decltype(fun1)*> vec;
    decltype(fun1)* p1, *p2, *p3, *p4;
    p1 = add;
    p2 = sub;
    p3 = mul;
    p4 = divi;
    vec.push_back(add);     //因为函数指针可以直接接函数名，所以这样入队更简单
    vec.push_back(p2);
    vec.push_back(p3);
    vec.push_back(p4);

    cout << vec[0](3, 2) << endl;
    cout << vec[1](6, 3) << endl;
    cout << vec[2](3, 5) << endl;
    cout << vec[3](453, 35) << endl;

    return 0;
}