#include <iostream>

using namespace std;

int main()
{
    constexpr size_t a = 2, b = 5;
    int ia[a][b] = { {2,6,5,8,12},
        {3,83,89,67,21} };

    //版本1：范围for语句
    for (auto& row : ia) {      //只有这里需要特别注意加个引用符号提示转换为引用而非指针。
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    //版本2：普通for语句，下标运算符
    for (auto i = 0; i != a; i++) {
        for (auto j = 0; j != b; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    //版本3：普通for语句，指针
    for (auto p = ia; p != ia + a; p++) {
        for (auto q = *p; q != *p + b; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}