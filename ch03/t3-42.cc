#include <vector>
#include <iostream>

using std::vector;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5};
    int iarr[5];
    for (size_t i = 0; i != ivec.size(); ++i)
        iarr[i] = ivec[i];
    for (auto i : iarr)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
