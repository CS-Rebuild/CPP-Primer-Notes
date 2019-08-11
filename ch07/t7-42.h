#include <string>
#include <iostream>

class Employee {
public:
    Employee(std::string id, std::string name, int age, double salary) 
        : _id(id), _name(name), _age(age), _salary(salary) { }
    Employee(std::istream &is) {
        is >> _id >> _name >> _age >> _salary;
    }
private:
    std::string _id;
    std::string _name;
    int _age;
    double _salary;
};
