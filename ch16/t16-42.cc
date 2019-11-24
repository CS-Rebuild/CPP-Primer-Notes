#include <iostream>
using namespace std;

template <typename T> void g(T&& val) {
    T t = val;
    cout << "&t: " << &t << endl;
    cout << "&val: " << &val << endl;
    //! val = 10; // ci: error
}

int main() {
    int i = 100;
    const int ci = 200;
    g(i);
    g(ci);
    g(42);
    g(i=ci);
}
