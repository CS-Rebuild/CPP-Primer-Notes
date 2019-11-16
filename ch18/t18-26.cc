#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define C1 0
#define C2 0
#define C3 0
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
protected:
    int *ival;
    std::vector<double> dvec;
};

int main() {
    MI mi;
    mi.print(42);
}

