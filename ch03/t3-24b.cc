#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> ivec;
    int i;
    while (std::cin >> i) {
        ivec.push_back(i);
    }
    if (ivec.empty()) {
        std::cout << "empty" << std::endl;
    } else {
        for (auto beg = ivec.cbegin(), end = ivec.cend() - 1; beg <= end; ++beg, --end)
            std::cout << *beg + *end << std::endl;       
    }
    return 0;
}
