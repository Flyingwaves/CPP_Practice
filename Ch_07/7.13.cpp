#include <string>
#include "7.11.h"
#include <iostream>

using namespace std;

int main()
{
    /*Sales_data total(cin);
    if (!total.name.empty()) {
        do {
            Sales_data trans(cin);
            if (trans.name.empty())
                break;
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total);
                total = trans;
            }
        } while (cin);
        print(cout, total);
    }
    else {
        cerr << "No data?" << endl;
    }*/



    Sales_data total(std::cin);
    if (!total.isbn().empty())
    {
        std::istream& is = std::cin;
        while (is) {
            Sales_data trans(is);
            if (!is) break;     //这句一定要有
            //对于输入流来说，其作为判断条件时，根据输入状态是否有效来决定真假。
            //输入流的状态并不是直接检查下一次的读取是否有效来判断，它来自上一次的读取操作是否成功
            //每次读取之后，根据读取的情况来决定输入流的状态，成功则有效，不成功则无效，在下一次读取之前都不会改变这个状态
            //也就是说，当你读取完最后的数据，哪怕后面就是结束符，但此时输入流依然有效，循环依然成立
            //在下一次循环中，再读取时失败了，此时才是无效状态，就可以退出了。
            //而这if语句就是及时止损，防止对无效的输入再进行操作。
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}