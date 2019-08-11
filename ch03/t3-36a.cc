#include <iostream>

int main() {
    const int sz = 10;
    int a[sz] = {1,2,3,4,5};
    int b[sz] = {1,2,3,4};

    for (size_t i = 0; i != sz; ++i) {
        std::cout << "a[" << i << "]: " << a[i] << "  b[" << i << "]: " <<  b[i] << std::endl;
        if (a[i] != b[i]) {
            std::cout << "unequal" << std::endl;
            return 0;
        }
    }

    std::cout << "equal" << std::endl;
    return 0;
}
