#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 4, c = 3, d = 2;
    if (a > b && b > c && c > d) {
        cout << "Y" << endl;    
    } else {
        cout << "N" << endl;    
    }

    return 0;
}
