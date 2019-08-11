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
    } else if (ivec.size() == 1) {
        std::cout << ivec[0] << std::endl;
    } else {
        for (auto it = ivec.cbegin(); it != ivec.cend() - 1; ++it) {
            std::cout << *it + *(it + 1) << std::endl;
        }
    }
    return 0;
}
