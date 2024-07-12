#include <iostream>
#include <vector>

//#define NDEBUG  //ע�͵��Ϳ�������ģʽ
using namespace std;

void print_vec(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
#ifndef NDEBUG
    cout << "the vector size is " << end - beg << endl;
#endif // !NDEBUG

    if (beg == end)  return;
    cout << *beg++ << endl;
    print_vec(beg, end);
}
int main()
{
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    print_vec(vec.begin(), vec.end());
    return 0;
}