#include <vector>
#include <iostream>
using std::vector;

int main() {
    int int_arr[] = {1, 2, 3, 4, 5};
    vector<int> ivec(std::begin(int_arr), std::end(int_arr));
    for (auto i : ivec)
        std::cout << i << std::endl;
    return 0;
}
