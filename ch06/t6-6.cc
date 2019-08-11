#include <iostream>
#include <string>
using namespace std;
int fun(int val) {
    static int ia = val;
    int ib;
    ib = val;
    cout << ib << " "<< ia++ << endl;
}
int main() {
    int val;
    cin >> val;
    for (int i = 0; i < 10; ++i)
        fun(val);

    return 0;
}
