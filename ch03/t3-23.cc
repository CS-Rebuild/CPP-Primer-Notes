#include <iostream>
#include <vector>
#include <cctype>

using std::vector;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        *it = *it * 2;
    for (auto i : ivec)
        std::cout << i << std::endl;
    return 0;
}
