#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b) {
        try {
            if (b == 0)
                throw runtime_error("second number is zero");
            cout << a / b << endl;
        }
        catch (runtime_error err) { //����СС�����⣬����ֱ�Ӷ���һ��������
            cout << err.what() << endl;
            cout << "try again and reset the number? Enter y or n" << endl;
            char c;
            cin >> c;
            if (c == 'y') {
                cin >> b;
                cout << a / b << endl;
            }
            else if(!cin || c == 'n')
            {
                break;
            }
        }

        
    }

    return 0;
}