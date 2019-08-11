#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0)
        throw runtime_error("division by 0");
    cout << a / b << endl;

    return 0;
}
