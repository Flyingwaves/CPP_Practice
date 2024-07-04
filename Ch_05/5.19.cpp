#include <iostream>
#include <string>

using namespace std;

int main()
{
    do {
        string s1, s2;
        cin >> s1 >> s2;
        
        if (s1.empty()) {
            cout << "无输入" << endl;
        }
        else {
            cout << "较短的是：";
            if (s1.size() < s2.size())
                cout << s1 << endl;
            else
                cout << s2 << endl;
        }
        
        
    } while (cin);
    
    return 0;
    
}
