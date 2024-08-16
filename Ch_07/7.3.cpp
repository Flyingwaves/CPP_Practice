#include <string>
#include "7.2.h"
#include <iostream>

using namespace std;

int main()
{
    Sales_data total;
    if (cin >> total.name >> total.saleNum >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.name >> trans.saleNum >> trans.revenue) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                cout << "sum: " << total.name << " " << total.saleNum << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << "sum: " << total.name << " " << total.saleNum << " " << total.revenue << endl;
    }
    else {
        cerr << "No data?" << endl;
    }
    return 0;
}