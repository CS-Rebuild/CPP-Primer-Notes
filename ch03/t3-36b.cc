#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> iva{1,2,3,4,5};
    vector<int> ivb{1,2,3,4,5};
    if (iva == ivb) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "unequal" << std::endl;
    }
    return 0;
}
