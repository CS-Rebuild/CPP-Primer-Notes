#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define C1 1
#define C2 1
#define C3 1
struct Base1 {
    void print(int) const {
        cout << __PRETTY_FUNCTION__ << endl;
    }
protected:
    int ival;
    double dval;
    char cval;
private:
    int *id;
};

struct Base2 {
#if C3
    void print(double) const {
        cout << __PRETTY_FUNCTION__ << endl;
    }
#endif
protected:
    double fval;
private:
    double dval;
};

struct Derived : public Base1 {
#if C2
    void print(std::string) const {
        cout << __PRETTY_FUNCTION__ << endl;
    }
#endif
protected:
    std::string sval;
    double dval;
};

struct MI : public Derived, public Base2 {
#if C1
    void print(std::vector<double>) const {
        cout << __PRETTY_FUNCTION__ << endl;
    }
#endif
    void print(int) const {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void foo(double cval);
protected:
    int *ival;
    std::vector<double> dvec;
};

int ival;
double dval;
void MI::foo(double cval) {
    int dval;

    // a)
    ::ival;
    ::dval;
    Base1::ival;
    Base1::dval;
    Base1::cval;
    Base1::print(0);

    Derived::sval;
    Derived::dval;
    Derived::print("test");

    Base2::fval;
    Base2::print(0.5);

    ival;
    dvec.begin();

    // c)
    dval = Base1::dval + Derived::dval;

    // d)
    dvec.push_back(20.6);
    fval = dvec.back();

    // e)
    sval[0] = cval;
}

int main() {
    MI mi;
    mi.print(42);
    mi.foo(32); 
}

