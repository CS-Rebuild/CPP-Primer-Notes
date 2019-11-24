#include <iostream>
using namespace std;

template <typename T, unsigned N> 
constexpr unsigned array_size(const T (&arr)[N]) {
    return N;
}

int main() {
    int i[6];
    char c[7];
    cout << array_size(i) << endl;
    cout << array_size(c) << endl;
}
