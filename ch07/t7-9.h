#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <iostream>
using std::istream;
using std::ostream;

class Person {
public:
    std::string get_name() const { return name; }
    std::string get_address() const { return address; }
//private:
    std::string name;
    std::string address;
};

istream& read(istream &is, Person &item) {
    is >> item.name >> item.address;
    return is;
}

ostream& print(ostream &os, const Person &item) {
    os << item.name << " " << item.address;
    return os;
}

#endif

