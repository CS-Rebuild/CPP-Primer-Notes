#include <iostream>
#include <typeinfo>
using namespace std;

class A {
public:
    virtual ~A() {}
};

class B : public A {
public:
    virtual ~B() {}
};

class C : public B {
public:
    virtual ~C() {}
};

class D : public B, public A {
public:
    virtual ~D() {}
};

int main() {
// a)
    {
        A *pa = new C;
        B *pb = dynamic_cast<B*>(pa);
        cout << pb << endl;
        if (C *pc = dynamic_cast<C*>(pa)) {
            cout << "success: " << pc << endl;
        } else {
            cout << "failed: " << pc << endl;
        }       
        try {
            C &rc = dynamic_cast<C &>(*pa);
            cout << "success" << endl;
        } catch (std::bad_cast &bc) {
            cout << "failed" << endl;
        }
    }
// b)
    {
        B *pb = new B;
        C *pc = dynamic_cast<C*>(pb);
        cout << pc << endl;
    }
// c)
    {
      //!  A *pa = new D;
      //!  B *pb = dynamic_cast<B*>(pa);
      //!  cout << pb << endl;
    }
}
