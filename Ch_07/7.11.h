#pragma once
#ifndef EX72
#define EX72

#include <string>
#include <iostream>

//补充2.6.2
struct Sales_data
{
    //构造函数
    Sales_data() = default;
    Sales_data(const std::string& s) : name(s) {};
    Sales_data(const std::string& s, int n, double price) :
        name(s), saleNum(n), revenue(n* price) {};
    Sales_data(std::istream&);  //这是一个声明

    //成员函数
    std::string isbn() const { return name; };
    Sales_data& combine(const Sales_data&);

    //数据成员
    std::string name;   //书号
    int saleNum = 0;     //销量    
    double revenue = 0;     //收入
};

Sales_data& Sales_data::combine(const Sales_data& sec) {
    this->saleNum += sec.saleNum;
    this->revenue += sec.revenue;
    return *this;
}

std::istream& read(std::istream& is, Sales_data& it) {
    double price;       //单价
    is >> it.name >> it.saleNum >> price;
    it.revenue = it.saleNum * price;    //实时计算收入
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& it) {
    os << "sum: " << it.name << " " << it.saleNum << " " << it.revenue << std::endl;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data ans = lhs;
    ans.combine(rhs);
    return ans;
}
//构造函数，前面作用域必须有
Sales_data::Sales_data(std::istream& is) {
    read(is, *this);
}
#endif // !EX72
