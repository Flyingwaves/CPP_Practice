#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, pre;
    bool flag = false;
    while (cin >> s) {
        if (isupper(s[0]) && s == pre) {    //�������ǣ���ζ�Ŵ�д���Ҳ��ͬ��se��Se�Ͳ���ͬ��
                                            //ע���������Ҫ��������
            flag = true;
            break;
        }
        pre = s;
    }

    if (flag)
        cout << s;
    else
        cout << "no word";

    return 0;
}