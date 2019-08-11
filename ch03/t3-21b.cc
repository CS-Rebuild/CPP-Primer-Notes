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
        for (auto it_b = ivec.cbegin(), it_e = ivec.cend() - 1; it_b != it_e; ++it_b, --it_e) {
            std::cout << *it_b + *it_e << std::endl; 
        }
    }
    return 0;
}
