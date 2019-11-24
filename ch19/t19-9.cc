#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

class Base {
    friend bool operator==(const Base&, const Base&);
public:
    Base(int _i = 10) : i(_i) {}
protected:
    virtual bool equal(const Base &) const;
private:
    int i;
};

bool Base::equal(const Base &rhs) const {
    return i == rhs.i;
}

class Derived : public Base {
public:
    Derived(int _i = 20, int _j = 30) : Base(_i), j(_j) {}
protected:
    bool equal(const Base&) const;
private:
    int j; 
};

bool Derived::equal(const Base &rhs) const {
    auto r = dynamic_cast<const Derived &>(rhs);
    return j == r.j && Base::equal(rhs);
}

bool operator==(const Base &lhs, const Base &rhs) {
    return typeid(lhs) == typeid(rhs) && lhs.equal(rhs);
}

int main() {
    int arr[10];
    Derived d1(2, 3), d2(2, 3), d3(3, 4), d4;

    cout << (d1 == d2) << endl;
    cout << (d4 == d3) << endl;

    cout << "=======" << endl;

    Base *p = &d1;
    cout << typeid(42).name() << ", "
         << typeid(arr).name() << ", "
         << typeid(std::string).name() << ", "
         << typeid(p).name() << ", "
         << typeid(d2).name() << ", "
         << typeid(*p).name() << endl;
}
