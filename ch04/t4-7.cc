#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl;
    unsigned int a = ~0;
    cout << a << endl;
    cout << a + 1 << endl; 

    int b = 0x7FFFFFFF;
    cout << b << endl;
    cout << b + 1 << endl;

    int c = 0x80000000;
    cout << c << endl;
    cout << c - 1 << endl;

    return 0;
}
