#include <iostream>
using namespace std;

struct Base {
    void bar(int) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
protected:
    int ival;
};

struct Derived1 : virtual public Base {
    void bar(char) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void foo(char) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
protected:
    char cval;
};

struct Derived2 : virtual public Base {
    void foo(int) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
protected:
    int ival;
    char cval;
};

class VMI : public Derived1, public Derived2 {
public:
    void fun();
};


void VMI::fun() {
    bar(33);
    foo(42);
    ival = 20;
    cval = 2;
}

int main() {
    VMI vm;
    vm.fun();
}

