#include <iostream>
using namespace std;

template <typename T> void f(T) {
    cout << __PRETTY_FUNCTION__ << endl;
}

template <typename T> void f(const T*) {
    cout << __PRETTY_FUNCTION__ << endl;
}

template <typename T> void g(T) {
    cout << __PRETTY_FUNCTION__ << endl;
}

template <typename T> void g(T*) {
    cout << __PRETTY_FUNCTION__ << endl;
}

int main() {
    int i = 42, *p = &i;
    const int ci = 0, *p2 = &ci;
    g(42); // g(T)  T = int
    g(p);  // g(T*) T = int 
    g(ci); // g(T)  T = int
    g(p2); // g(T*) T = const int
    f(42); // f(T)  T = int
    f(p);  // f(const T*) T = int // f(T) T = int*
    f(ci); // f(T)  T = int
    f(p2); // f(const T*) T = int
}
