#include <iostream>
using namespace std;

class Class {
public:
    Class() { cout << __PRETTY_FUNCTION__ << endl; }
    ~Class() { cout << __PRETTY_FUNCTION__ << endl; }
};

class Base : public Class {
public:
    Base() { cout << __PRETTY_FUNCTION__ << endl; }
    ~Base() { cout << __PRETTY_FUNCTION__ << endl; }
};

class D1 : virtual public Base {
public:
    D1() : Base() { cout << __PRETTY_FUNCTION__ << endl; }
    ~D1() { cout << __PRETTY_FUNCTION__ << endl; }
};

class D2 : virtual public Base {
public:
    D2() : Base() { cout << __PRETTY_FUNCTION__ << endl; }
    ~D2() { cout << __PRETTY_FUNCTION__ << endl; }
};

class MI : public D1, public D2 {
public:
    MI() { cout << __PRETTY_FUNCTION__ << endl; }
    ~MI() { cout << __PRETTY_FUNCTION__ << endl; }
};

class Final : public MI, public Class {
public:
    Final():Base() { cout << __PRETTY_FUNCTION__ << endl; }
    ~Final() { cout << __PRETTY_FUNCTION__ << endl; }
};

int main() {
    Final f;
    cout << "----" << endl;
    Base *pb;
    Class *pc;
    MI *pmi;
    D2 *pd2;
    //! pb = new Class;
    //! pc = new Final;
    //! pmi = pb;
    pd2 = pmi;
}
