#pragma once
#ifndef EX72
#define EX72

#include <string>

//����2.6.2
struct Sales_data
{
    //��Ա����
    std::string isbn() const { return name; };
    Sales_data& combine(const Sales_data&);
    
    //���ݳ�Ա
    std::string name;   //���
    int saleNum = 0;     //����    
    double revenue = 0;     //����
};

Sales_data& Sales_data::combine(const Sales_data& sec) {
    this->saleNum += sec.saleNum;
    this->revenue += sec.revenue;
    return *this;
}
#endif // !EX72
