#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <iostream>
#include <string>

using namespace std;

class Person {
    friend istream& read(istream&, Person);
    friend ostream& print(ostream&, Person);

public:
    Person() = default;
    Person(const string& s1, const string& s2)
        : name(s1), address(s2) {}
    Person(istream&);

    string self_name() const { return name; }
    string self_address() const { return address; }

private:
    string name;
    string address;
};

inline
Person::Person(istream& is) {
    read(is, *this);
}

inline istream&
read(istream& is, Person p) {
    is >> p.name >> p.address;
    return is;
}

inline ostream&
print(ostream& os, Person p) {
    os << "name: " << p.name << " address: " << p.address << endl;
    return os;
}

#endif // !__PERSON__
