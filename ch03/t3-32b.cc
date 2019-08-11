#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> ivec;
    for (int i = 0; i < 10; ++i)
        ivec.push_back(i);

    vector<int> ivec2;
    ivec2 = ivec;
    for (auto i : ivec2)
        std::cout << i << std::endl;

    return 0;
}
