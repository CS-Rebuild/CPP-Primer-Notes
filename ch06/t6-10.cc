#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After: " << a << " " << b << endl;

    return 0;
}
