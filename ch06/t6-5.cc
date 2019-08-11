#include <iostream>
#include <string>
using namespace std;

int my_abs(int val) {
    return val >= 0 ? val : -val;
}

int main() {
    int val;
    cin >> val;
    cout << my_abs(val) << endl; 

    return 0;
}
