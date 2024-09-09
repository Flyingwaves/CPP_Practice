#pragma once
#ifndef Ex74
#define Ex74

#include <string>
#include <iostream>

using namespace std;

class Person {

public:
    //构造函数
    Person() = default;
    Person(const string & s1, const string & s2) : name(s1), address(s2) {}
    Person(istream& is) {
        read(is, *this);
    }

    //成员函数
    string self_name() const { return name; };
    string self_address() const { return address; };

    //接口函数
    std::istream& read(std::istream& is, Person item) {
        is >> item.name >> item.address;
        return is;
    }

    std::ostream& print(std::ostream& os, Person item) {
        os << "name: " << item.name << " " << "address: " << item.address;
        return os;
    }

private:
    //数据成员
    string name;
    string address;

};

#endif // !Ex74
