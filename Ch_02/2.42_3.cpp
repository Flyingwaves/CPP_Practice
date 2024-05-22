#include <iostream>
#include "Sales_data.h"

//ctrl+z��Windows��������Unix����ctrl+d��Ҳ����osϵͳ��
int main() {
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