#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char ca[] = "nice";
    char cb[] = "book";

    char bigstr[20];
    strcpy_s(bigstr, ca);
    strcat(bigstr, " ");  //�ڶ�����������д��' ',Ҫ��˫����
    strcat_s(bigstr, cb);
    
    cout << bigstr << endl;

    return 0;
}