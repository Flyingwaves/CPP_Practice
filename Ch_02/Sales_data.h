//#pragma once
#ifndef SALE_DATA_H
#define SALE_DATA_H
#include <string>
#include <iostream>

struct Sales_data {
    std::string name;       //ISBN号
    //std::string bookNum;    //书序列号
    int saleNum = 0;        //销量
    double price = 0.0;     //单价
    double revenue = 0.0;   //收入

    std::string isbn();
    void print();
    void calculate();
};

std::string Sales_data::isbn() {
    return name;
}
void Sales_data::print() {
    std::cout << name << " " << saleNum << " " << revenue << std::endl;
}
void Sales_data::calculate() {
    revenue = saleNum * price;
}
#endif