#include <iostream>

using namespace std;

//2.6.1
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
    std::cout << "sum: " << name << " " << saleNum << " " << revenue << std::endl;
}
void Sales_data::calculate() {
    revenue = saleNum * price;
}

int main()
{
    Sales_data total;
	if (std::cin >> total.name >> total.saleNum >> total.price) {
		total.calculate();
		Sales_data trans;

		while (std::cin >> trans.name >> trans.saleNum >> trans.price) {
			trans.calculate();
			if (total.isbn() == trans.isbn()) {
				total.revenue += trans.revenue;
				total.saleNum += trans.saleNum;
			}

			else {
				total.print();
				total = trans;
			}
		}

		total.print();
	}
	else {
		std::cerr << "no data" << std::endl;
		return -1;
	}
	return 0;
}