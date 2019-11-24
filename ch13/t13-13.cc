#include <iostream>
#include <vector>

using namespace std;

struct X {
    X() { 
        std::cout << __PRETTY_FUNCTION__ << " " << this << std::endl; 
    }

    X(const X&) {
        std::cout << __PRETTY_FUNCTION__ << " " << this << std::endl;
    }
    
    X& operator=(const X&) {
        std::cout << __PRETTY_FUNCTION__ << " " << this << std::endl;
    }
    
    ~X() {
        std::cout << __PRETTY_FUNCTION__ << " " << this << std::endl; 
    }
};

X f(X& x) {
    std::cout << __PRETTY_FUNCTION__ << " " << &x << std::endl;
    return x;
}

X f(X *x) {
    std::cout << __PRETTY_FUNCTION__ << " " << x << std::endl; 
    return *x;
}

X f2(X x) {
    std::cout << __PRETTY_FUNCTION__ << " " << &x << std::endl; 
    return x;
}

X *f() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    X *x = new X();
    return x;
}

X f3() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    X x;
    return x;
}

int main() {
    X x1; // X()
    X x2(x1); // X(const X&)
    X x3; // X()
    x3 = x1; // operator=(const X&)
    cout << "vector<X> init begin" << endl;
    vector<X> v{x1, x2}; // X(const X&)
    cout << "vector<X> init done" << endl;
    v[1] = x3; // operator=(const X&)
    v.pop_back(); // ~X()

    cout << "f(x) t1" << endl;
    X t1=f(x1);
    cout << "f(x) t2" << endl;
    X t2=f(&x1);
    cout << "f(x) t3" << endl;
    t1=f(&x1);
    cout << "f(x) t4" << endl;
    t1=f2(x1);
    cout << "f(x) t5" << endl;
    X *t3=f();
    cout << "f(x) t6" << endl;
    t1=f3();

    cout << "main end" << endl;
}
