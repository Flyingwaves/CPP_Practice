#include <iostream>

using namespace std;

int main()
{
    constexpr size_t a = 2, b = 5;
    int ia[a][b] = { {2,6,5,8,12},
        {3,83,89,67,21} };

    //�汾1����Χfor���
    for (auto& row : ia) {      //ֻ��������Ҫ�ر�ע��Ӹ����÷�����ʾת��Ϊ���ö���ָ�롣
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    //�汾2����ͨfor��䣬�±������
    for (auto i = 0; i != a; i++) {
        for (auto j = 0; j != b; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    //�汾3����ͨfor��䣬ָ��
    for (auto p = ia; p != ia + a; p++) {
        for (auto q = *p; q != *p + b; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}