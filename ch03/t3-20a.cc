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
        for (decltype(ivec.size()) idx = 0; idx != ivec.size() - 1; ++idx) {
            std::cout << ivec[idx] + ivec[idx+1] << std::endl;       
        }
    }
    return 0;
}
