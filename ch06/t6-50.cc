#include <iostream>
using namespace std;

void f() {
    cout << __PRETTY_FUNCTION__ << endl;
}

void f(int a) {
    cout << __PRETTY_FUNCTION__ << endl;
}

void f(int a, int b) {
    cout << __PRETTY_FUNCTION__ << endl;
}

void f(double a, double b = 3.14) {
    cout << __PRETTY_FUNCTION__ << endl;
}

int main() {
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}
