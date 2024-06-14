#include <iostream>
#include <vector>

using namespace std;

//����Ϊʲô������const int*�أ���Ϊ���ǵײ�const�����ܿ�������ͨ����
bool compare(int* const b1, int* const e1, int* const b2, int* const e2) {
    if ((e1 - b1) != (e2 - b2))
        return false;
    else {
        for (int* p = b1, *q = b2; p != e1; p++, q++) {
            if (*p != *q)
                return false;
        }
        return true;
    }

}
int main()
{
    int ia[] = { 1, 3, 4 };
    int ib[] = { 2, 1, 0 };
    bool flag = compare(begin(ia), end(ia), begin(ib), end(ib));
    if (flag)
        cout << "�������" << endl;
    else
    {
        cout << "���鲻���" << endl;
    }

    vector<int> va(10, 2);
    vector<int> vb(va);
    if (va == vb)
        cout << "vector���" << endl;
    else
        cout << "vector�����" << endl;

    return 0;
}