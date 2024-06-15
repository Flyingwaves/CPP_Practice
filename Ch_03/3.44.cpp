#include <iostream>

using namespace std;

int main()
{
    constexpr size_t a = 2, b = 5;
    int ia[a][b] = { {2,6,5,8,12},
        {3,83,89,67,21} };

    /*using arr1 = int&[5];*/   //���ø���������������Ϸ���ֱ���ڱ��������ü��ɡ�
    using arr = int[5];

    //�汾1����Χfor���
    for (arr& row : ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    //�汾2����ͨfor��䣬�±������
    for (size_t i = 0; i != a; i++) {
        for (size_t j = 0; j != b; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    //�汾3����ͨfor��䣬ָ��
    for (arr *p = ia; p != ia + a; p++) {
        for (int* q = *p; q != *p + b; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}