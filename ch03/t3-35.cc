#include <iostream>

int main() {
    const int sz = 5;
    int a[sz];
    for (int *p = a; p != &a[sz]; ++p)
        *p = 0;
    for (auto i : a)
        std::cout << i << std::endl;
    return 0;
}
