#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee() : name(""), id(id_base++) {}
    Employee(string name_) : name(name_), id(id_base++) {}
    void print() {
        cout << name << ":" << id << endl;
    }
private:
    string name;
    size_t id;
    static size_t id_base;
};

size_t Employee::id_base = 0;

int main() {
    Employee e1("skd");
    e1.print();
    Employee e2;
    e2.print();
    e2 = e1;
    e2.print();
}
