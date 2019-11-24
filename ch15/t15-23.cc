#include <iostream>
using namespace std;

class Base {
public:
    virtual int fcn() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class D1 : public Base {
public:
    int fcn(int) {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    virtual void f2() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class D2 : public D1 {
public:
    int fcn(int) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    int fcn() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void f2() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main() {
    Base bobj; D1 d1obj; D2 d2obj;
    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
    bp1->fcn();
    bp2->fcn();
    bp3->fcn();

    cout << "----" << endl;
    D1 *d1p = &d1obj; D2 *d2p = &d2obj;
    //! bp2->f2();
    d1p->f2();
    d2p->f2();

    cout << "----" << endl;
    Base *p1 = &d2obj; D1 *p2 = &d2obj; D2 *p3 = &d2obj;
    //! p1->fcn(42);
    p2->fcn(42);
    p3->fcn(42);
    cout << "----" << endl;
}

