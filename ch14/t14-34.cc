#include <iostream>
using namespace std;

struct A {
    int operator()(bool c, int a, int b) {
        return c ? a : b;
    }
};

int main() {
    A f;
    cout << f(true, 3, 4) << endl;
    cout << f(false, 3, 4) << endl;
}
