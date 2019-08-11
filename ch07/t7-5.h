#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

class Person {
public:
    std::string get_name() const { return name; }
    std::string get_address() const { return address; }
private:
    std::string name;
    std::string address;
};
#endif

