#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a && a != 42)
        cout << a << endl;
    cout << "Quit: " << a << endl;
    return 0;
}
