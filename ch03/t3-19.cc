#include <vector>
#include <iostream>

using std::vector;

int main() {
    vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v2(10, 42);
    vector<int> v3(10);
    for (auto &v : v3)
        v = 42;

    for (decltype(v1.size()) index = 0; index != v1.size(); ++index) {
        std::cout << "v1:" << index << ": " << v1[index] << std::endl;
        std::cout << "v2:" << index << ": " << v2[index] << std::endl;
        std::cout << "v3:" << index << ": " << v3[index] << std::endl;
    }
    return 0; 
}
