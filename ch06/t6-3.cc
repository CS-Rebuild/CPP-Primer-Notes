#include <iostream>
#include <string>
using namespace std;

int fact(int val) {
    if (val <= 1) {
        return val;
    }
    return val * fact(val - 1);
}

int main() {
    int val = 0;
    cin >> val;
    cout << fact(val) << endl;
    return 0;
}
