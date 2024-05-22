#include <iostream>
#include <string>

struct Sales_data {
    std::string name;       //ISBN号
    std::string bookNum;    //书序列号
    int saleNum;            //销量
    double price;           //单价
    double revenue;         //收入
};

int main() 
{
    Sales_data data1, data2;
    std::cin >> data1.name >> data1.saleNum >> data1.price;
    std::cin >> data2.name >> data2.saleNum >> data2.price;
    data1.revenue = data1.saleNum * data1.price;
    data2.revenue = data2.saleNum * data2.price;
    
    if (data1.name == data2.name) {
        int cnt = data1.saleNum + data2.saleNum;
        double total = data1.revenue + data2.revenue;
        std::cout << data1.name << " " << cnt << " " << total;
    }
    else {
        std::cout << "not same ISBN" << std::endl;
    }
    
    return 0;
}