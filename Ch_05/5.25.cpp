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
        catch (runtime_error err) { //这里小小的问题，可以直接定义一个变量吗
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