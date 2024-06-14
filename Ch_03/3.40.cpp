#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char ca[] = "nice";
    char cb[] = "book";

    char bigstr[20];
    strcpy_s(bigstr, ca);
    strcat(bigstr, " ");  //第二个参数不能写成' ',要是双引号
    strcat_s(bigstr, cb);
    
    cout << bigstr << endl;

    return 0;
}