#include <iostream>
using namespace std;

struct Integral {
    Integral(int i):i(i) {}
#if 1
    operator const int() {
        cout << __PRETTY_FUNCTION__ << endl;
        return i;
    }
#endif
    operator int() const {
        cout << __PRETTY_FUNCTION__ << endl;
        return i;
    }
    int i;
};

int main() {
    const Integral a(3);
    Integral b(4);
    cout << a + 2 << endl;
    cout << b + 2 << endl;
}
