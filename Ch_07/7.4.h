#pragma once
#ifndef Ex74
#define Ex74

#include <string>

using namespace std;

struct Person {
    string name;
    string address;

    string self_name() const { return name; };
    string self_address() const { return address; };

};
#endif // !Ex74
