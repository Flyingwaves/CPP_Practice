#pragma once
#ifndef EX72
#define EX72

#include <string>
#include <iostream>

//����2.6.2
struct Sales_data
{
    //���캯��
    Sales_data() = default;
    Sales_data(const std::string& s) : name(s) {};
    Sales_data(const std::string& s, int n, double price) :
        name(s), saleNum(n), revenue(n* price) {};
    Sales_data(std::istream&);  //����һ������

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

std::istream& read(std::istream& is, Sales_data& it) {
    double price;       //����
    is >> it.name >> it.saleNum >> price;
    it.revenue = it.saleNum * price;    //ʵʱ��������
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
//���캯����ǰ�������������
Sales_data::Sales_data(std::istream& is) {
    read(is, *this);
}
#endif // !EX72
