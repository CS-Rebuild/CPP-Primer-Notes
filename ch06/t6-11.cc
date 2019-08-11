#include <iostream>
using namespace std;

void reset(int &val) {
    val = 0;
}

int main() {
    int a = 10;
    cout << "Before: " << a << endl;
    reset(a);
    cout << "After: " << a << endl;
    
    return 0;
}
