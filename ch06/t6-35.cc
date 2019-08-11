#include <iostream>
using namespace std;

int factorial(int val) {
    cout << val << " ";
    if (val > 1)
        return factorial(val-1) * val;
    cout << endl;
    return 1;
}

int main() {
    cout  << factorial(5) << endl;

    return 0;
}
