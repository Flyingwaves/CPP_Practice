#pragma once
#ifndef Ex74
#define Ex74

#include <string>
#include <iostream>

using namespace std;

struct Person {

    //���ݳ�Ա
    string name;
    string address;
    
    //���캯��
    Person() = default;
    Person(const string& s1, const string& s2) : name(s1), address(s2) {}
    Person(istream& is);

    //��Ա����
    string self_name() const { return name; };
    string self_address() const { return address; };

};
Person::Person(istream& is) {
    read(is, *this);
}

std::istream& read(std::istream& is, Person item) {
    is >> item.name >> item.address;
    return is;
}

std::ostream& print(std::ostream& os, Person item) {
    os << "name: " << item.name << " " << "address: " << item.address;
    return os;
}
#endif // !Ex74
