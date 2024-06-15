#include <iostream>

using namespace std;

int main()
{
    constexpr size_t a = 2, b = 5;
    int ia[a][b] = { {2,6,5,8,12},
        {3,83,89,67,21} };

    //∞Ê±æ1£∫∑∂Œßfor”Ôæ‰
    for (int(&row)[5] : ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    //∞Ê±æ2£∫∆’Õ®for”Ôæ‰£¨œ¬±Í‘ÀÀ„∑˚
    for (size_t i = 0; i != a; i++) {
        for (size_t j = 0; j != b; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
        
    //∞Ê±æ3£∫∆’Õ®for”Ôæ‰£¨÷∏’Î
    for (int(*p)[5] = ia; p != ia + a; p++) {
        for (int* q = *p; q != *p + b; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}