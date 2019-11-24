#include <iostream>
using namespace std;

class Base {
public:
    virtual void f() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class D1 : public Base {
public:
    void f() override final {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class D2 : public D1 {
public:
    void f() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main() {
    D1 d1;
    Base &b = d1;
    b.f();
    D2 d2;
    Base &b2 = d2;
    b2.f();
}
