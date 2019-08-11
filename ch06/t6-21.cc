#include <iostream>
using namespace std;

int compare(int a, const int *b) {
    return a > *b ? a : *b;
}

int main() {
    int a = 10;
    int b = 20;
    cout << compare(a, &b) << endl;
    b = 5;
    cout << compare(a, &b) << endl; 

    return 0;
}
