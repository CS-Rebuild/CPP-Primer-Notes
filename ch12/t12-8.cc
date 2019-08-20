#include <iostream>
using namespace std;

bool b() {
    int *p = new int;
    return p;
}

int main() {
    cout << b() << endl;

    return 0;
}
