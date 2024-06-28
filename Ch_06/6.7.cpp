#include <iostream>

using namespace std;

int count() {
    static int cnt = 0;
    return cnt++;
}

//int count() {
//    static int cnt = 0;
//    ++cnt;
//    if (cnt == 1)    return 0;
//    else
//    {
//        return cnt - 1;
//    }
//}

int main()
{
    for (int i = 0; i < 10; ++i)
        cout << count() << " ";
    return 0;
}