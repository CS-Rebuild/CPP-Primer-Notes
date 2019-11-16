#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void print() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~Base1() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class Base2 {
public:
    virtual void print() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~Base2() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class D1 : public Base1 {
public:
    virtual void print() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~D1() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};


class D2 : public Base2 {
public:
    virtual void print() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~D2() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};


class MI : public D1, public D2 {
public:
    virtual void print() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~MI() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main() {
    Base1 *pb1 = new MI;
    Base2 *pb2 = new MI;
    D1 *pd1 = new MI;
    D2 *pd2 = new MI;

    pb1->print();
    pd2->print();
    pd2->print();
    cout << "-------" << endl;
    delete pb2;
    cout << "-------" << endl;
    delete pd1;
    cout << "-------" << endl;
    delete pd2;
    cout << "-------" << endl;
}

