#include <iostream>
using namespace std;

int main() {
    int someValue = 0;
    int x = 10, y=20;
    cin >> someValue;
    cout << "before x: " << x << " y: " << y << endl;
    someValue ? ++x, ++y : --x, --y;
    cout << "after x: " << x << " y: " << y << endl;
    

    return 0;
}
