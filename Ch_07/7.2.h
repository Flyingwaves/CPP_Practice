#pragma once
#ifndef EX72
#define EX72

#include <string>

//补充2.6.2
struct Sales_data
{
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
#endif // !EX72
