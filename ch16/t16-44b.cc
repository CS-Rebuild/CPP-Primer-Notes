#include <iostream>
using namespace std;

template <typename T> void g(const T &val) {
    T t = val;
    cout << "&t: " << &t << endl;
    cout << "&val: " << &val << endl;
    //val = 10; // ci: error
    t = 20;
}

int main() {
    int i = 100;
    const int ci = 200;
    g(i);
    g(ci);
    g(i*ci);
    cout << "i: " << i << endl;
    cout << "ci: " << ci << endl;
}
