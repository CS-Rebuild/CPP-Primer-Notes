#include <iostream>
using namespace std;

class Base {
public:
    void pub_mem() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    //! void memfcn(Base &b) { b = *this; }
protected:
    int prot_mem;
private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    int f() { return prot_mem; }
    //! char g() { return priv_mem; }
    char g() { return 0; }
    void memfcn(Base &b) { b = *this; }
};

struct Priv_Derv : private Base {
    int f1() const { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Prot_Derv : protected Base {
    int f() const { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Derv {
    int use_base() { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Private : public Priv_Derv {
    //! int use_base() { return prot_mem; }
    int use_base() { return 0; }
    //! void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Protected : public Prot_Derv {
    int use_base() { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

int main() {
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
    Derived_from_Public dd1;
    Derived_from_Private dd2;
    Derived_from_Protected dd3;
    Base *p;
    p = &d1;
    //! p = &d2;
    //! p = &d3;
    p = &dd1;
    //! p = &dd2;
    //! p = &dd3;
/*    d1.memfcn(d1);
    d2.memfcn(d2);
    d3.memfcn(d3);
    dd1.memfcn(dd1);
    dd2.memfcn(dd2);
    dd3.memfcn(dd3);
*/
}
