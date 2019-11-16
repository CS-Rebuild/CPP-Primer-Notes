#include <iostream>
using namespace std;

namespace primerLib {
    void compute() {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    void compute(const void *) {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    void compute(int) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
}

using primerLib::compute;
void compute(int) {
    cout << __PRETTY_FUNCTION__ << endl;
}
void compute(double , double = 3.4) {
    cout << __PRETTY_FUNCTION__ << endl;
}
void compute(char *, char * = 0) {
    cout << __PRETTY_FUNCTION__ << endl;
}

void f() {
    compute(0); 
}

int main() {
//    using primerLib::compute;
    compute(0); 
    f();
}
