#include <iostream>

using namespace std;

int main()
{
    constexpr size_t a = 2, b = 5;
    int ia[a][b] = { {2,6,5,8,12},
        {3,83,89,67,21} };

    /*using arr1 = int&[5];*/   //不用给引用起别名，不合法，直接在别名上引用即可。
    using arr = int[5];

    //版本1：范围for语句
    for (arr& row : ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    //版本2：普通for语句，下标运算符
    for (size_t i = 0; i != a; i++) {
        for (size_t j = 0; j != b; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    //版本3：普通for语句，指针
    for (arr *p = ia; p != ia + a; p++) {
        for (int* q = *p; q != *p + b; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}