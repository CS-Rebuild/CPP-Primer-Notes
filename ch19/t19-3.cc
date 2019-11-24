#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {}
};

class B : public virtual A {
public:
    virtual ~B() {}
};

class C : public B {
public:
    virtual ~C() {}
};

class D : public virtual B, public virtual A {
public:
    virtual ~D() {}
};

int main() {
// a)
    {
        A *pa = new C;
        B *pb = dynamic_cast<B*>(pa);
        cout << pb << endl;
    }
// b)
    {
        B *pb = new B;
        C *pc = dynamic_cast<C*>(pb);
        cout << pc << endl;
    }
// c)
    {
        A *pa = new D;
        B *pb = dynamic_cast<B*>(pa);
        cout << pb << endl;
    }
}
