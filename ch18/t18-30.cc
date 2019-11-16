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
    Base(const Base &b) { cout << __PRETTY_FUNCTION__ << endl; }
    Base(int i) { cout << __PRETTY_FUNCTION__ << endl; }
    ~Base() { cout << __PRETTY_FUNCTION__ << endl; }
};

class D1 : virtual public Base {
public:
    D1() : Base() { cout << __PRETTY_FUNCTION__ << endl; }
    D1(const D1 &d1) : Base(d1) { cout << __PRETTY_FUNCTION__ << endl; }
    D1(int i) : Base(i) { cout << __PRETTY_FUNCTION__ << endl; }
    ~D1() { cout << __PRETTY_FUNCTION__ << endl; }
};

class D2 : virtual public Base {
public:
    D2() : Base() { cout << __PRETTY_FUNCTION__ << endl; }
    D2(const D2 &d2) : Base(d2) { cout << __PRETTY_FUNCTION__ << endl; }
    D2(int i) : Base(i) { cout << __PRETTY_FUNCTION__ << endl; }
    ~D2() { cout << __PRETTY_FUNCTION__ << endl; }
};

class MI : public D1, public D2 {
public:
    MI() : Base(), D1(), D2() { cout << __PRETTY_FUNCTION__ << endl; }
    MI(const MI &m) : Base(m), D1(m), D2(m) { cout << __PRETTY_FUNCTION__ << endl; }
    MI(int i) : Base(i), D1(i), D2(i) { cout << __PRETTY_FUNCTION__ << endl; }
    ~MI() { cout << __PRETTY_FUNCTION__ << endl; }
};

class Final : public MI, public Class {
public:
    Final():Base(), MI(), Class() { cout << __PRETTY_FUNCTION__ << endl; }
    Final(const Final &f):Base(f), MI(f), Class() { cout << __PRETTY_FUNCTION__ << endl; }
    Final(int i) : Base(i), MI(i), Class() { cout << __PRETTY_FUNCTION__ << endl; }
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
    cout << "----" << endl;
    { Final f2(f);}
    cout << "----" << endl;
    { Final f3(2);}
    cout << "----" << endl;
}
