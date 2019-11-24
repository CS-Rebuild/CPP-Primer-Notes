#include <iostream>
using namespace std;

template <typename T, unsigned N>
void print(T (&arr)[N]) {
    for (auto elem : arr)
        cout << elem << endl;
}

int main() {
    char c_arry[] = {'a', 'b', 'c', 'd'};
    double d_arry[] = {1.1, 2.2, 3.3};
    int i_arry[] = {1, 2, 3, 4};
    print(c_arry);
    print(d_arry);
    print(i_arry);
}
