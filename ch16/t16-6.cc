#include <iostream>
using namespace std;
template <typename T, unsigned N>
T *my_begin(T (&arr)[N]) {
    return arr;
}

template <typename T, unsigned N>
T *my_end(T (&arr)[N]) {
    return &arr[N];
}

int main() {
    int a[] = {1,2,3,4,5};
    cout << &a[0] << endl;
    cout << my_begin(a) << endl;
    cout << &a[5] << endl;
    cout << my_end(a) << endl;
}
