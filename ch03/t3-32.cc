#include <iostream>

int main() {
    int a[10] = {};
    for (size_t i = 0; i < 10; ++i)
        a[i] = i;
    int b[10];
    for (size_t i = 0; i < 10; ++i)
        b[i] = a[i];
    for (auto i : b)
        std::cout << i << std::endl;
    return 0;
}
