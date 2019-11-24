#include <iostream>
using namespace std;

class numbered {
public:
    numbered(int sn=base) : mysn(base++) {
        cout << __PRETTY_FUNCTION__ << " " << mysn << endl;
    }
    numbered(const numbered &nb) : mysn(base++) {
        cout << __PRETTY_FUNCTION__ << " " << mysn << endl;
    }
//private:
    int mysn;
    static int base;
};
int numbered::base = 666;

void f(const numbered &s) {
    cout << __PRETTY_FUNCTION__ << " " << s.mysn << endl;
}

int main() {
    numbered a, b = a, c = b;
    cout << "f test" << endl;
    f(a); f(b); f(c);
}
