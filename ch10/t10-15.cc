#include <iostream>
using namespace std;

int main() {
    int i = 20;
    auto f = [i](int a) {return a + i; };
    cout << f(3) << endl;
    return 0;
}
