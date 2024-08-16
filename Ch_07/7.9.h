#pragma once
#ifndef Ex74
#define Ex74

#include <string>
#include <iostream>

using namespace std;

struct Person {
    string name;
    string address;

    string self_name() const { return name; };
    string self_address() const { return address; };

};

std::istream& read(std::istream& is, Person item) {
    is >> item.name >> item.address;
    return is;
}

std::ostream& print(std::ostream& os, Person item) {
    os << "name: " << item.name << " " << "address: " << item.address;
    return os;
}
#endif // !Ex74
