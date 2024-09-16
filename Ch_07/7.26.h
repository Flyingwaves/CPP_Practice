#pragma once
#ifndef __SALES_DATA__
#define __SALES_DATA__

#include <iostream>
#include <string>

using namespace std;

class Sales_data {
    friend istream& read(istream&, Sales_data&);
    friend ostream& print(ostream&, Sales_data&);
    friend Sales_data add(const Sales_data&, const Sales_data&);

public:
    //构造函数
    Sales_data() = default;
    Sales_data(const string& s) : name(s) {}
    Sales_data(const string& s, int n, double price)
        : name(s), saleNum(n), revenue(n* price) {}
    Sales_data(istream& is);

    //成员函数
    string isbn() const { return name; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
    string name;
    int saleNum = 0;
    double revenue = 0.0;
};

inline
Sales_data::Sales_data(istream& is) {
    read(is, *this);
}

inline Sales_data&
Sales_data::combine(const Sales_data& rhs) {
    this->saleNum += rhs.saleNum;
    this->revenue += rhs.revenue;
    return *this;
}
//内联 平均价格
inline double
Sales_data::avg_price() const {
    return saleNum ? revenue / saleNum : 0;
}

inline istream&
read(istream& is, Sales_data& it) {
    double price;
    is >> it.name >> it.saleNum >> price;
    it.revenue = it.saleNum * price;
    return is;
}

inline ostream&
print(ostream& os, Sales_data& it) {
    os << "sum: " << it.name << it.saleNum << it.revenue << endl;
    return os;
}

inline Sales_data
add(const Sales_data lhs, const Sales_data rhs) {
    Sales_data ans = lhs;
    ans.combine(rhs);
    return ans;
}

#endif // !__SALES_DATA__
