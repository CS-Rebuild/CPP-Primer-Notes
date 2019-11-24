#include <iostream>
using namespace std;

class Base {
public:
    void pub_mem() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
protected:
    int prot_mem;
private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    int f() { return prot_mem; }
    //! char g() { return priv_mem; }
    char g() { return 0; }
};

struct Priv_Derv : private Base {
    int f1() const { return prot_mem; }
};

struct Prot_Derv : protected Base {
    int f() const { return prot_mem; }
};

struct Derived_from_Public : public Pub_Derv {
    int use_base() { return prot_mem; }
};

struct Derived_from_Private : public Priv_Derv {
    //! int use_base() { return prot_mem; }
    int use_base() { return 0; }
};

struct Derived_from_Protected : public Prot_Derv {
    int use_base() { return prot_mem; }
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
    p = &d2;
    p = &d3;
    p = &dd1;
    p = &dd2;
    p = &dd3;
}
