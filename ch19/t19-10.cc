#include <iostream>
#include <typeinfo>
using namespace std;

class A {
public:
    virtual ~A() {}
};

class B : public A {
public:
};

class C : public B {

};


int main() {
    A *pa = new C;
    cout << typeid(pa).name() << endl;

    C cobj;
    A &ra1 = cobj;
    cout << typeid(&ra1).name() << endl;

    B *px = new B;
    A &ra2 = *px;
    cout << typeid(ra2).name() << endl;
}
