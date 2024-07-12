#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "argc = " << argc << endl;
    cout << argv[0] << endl;

    string s;
    for (int i = 0; i < argc; ++i) {
        if(i > 0)
            s += argv[i];
        cout << argv[i] << endl;
    }

    cout << "str = " << s;
    return 0;
}