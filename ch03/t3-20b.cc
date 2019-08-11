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
        for (decltype(ivec.size()) idx = 0; idx != (ivec.size() + 1) / 2; ++idx) {
            std::cout << ivec[idx] + ivec[ivec.size() - idx - 1] << std::endl;       
        }
    }
    return 0;
}
