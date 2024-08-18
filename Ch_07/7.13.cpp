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
            if (!is) break;     //���һ��Ҫ��
            //������������˵������Ϊ�ж�����ʱ����������״̬�Ƿ���Ч��������١�
            //��������״̬������ֱ�Ӽ����һ�εĶ�ȡ�Ƿ���Ч���жϣ���������һ�εĶ�ȡ�����Ƿ�ɹ�
            //ÿ�ζ�ȡ֮�󣬸��ݶ�ȡ�������������������״̬���ɹ�����Ч�����ɹ�����Ч������һ�ζ�ȡ֮ǰ������ı����״̬
            //Ҳ����˵�������ȡ���������ݣ����º�����ǽ�����������ʱ��������Ȼ��Ч��ѭ����Ȼ����
            //����һ��ѭ���У��ٶ�ȡʱʧ���ˣ���ʱ������Ч״̬���Ϳ����˳��ˡ�
            //����if�����Ǽ�ʱֹ�𣬷�ֹ����Ч�������ٽ��в�����
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