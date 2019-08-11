#include <iostream>
#include <vector>
#include <cctype>

using std::vector;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it_b = ivec.begin();
    auto it_e = ivec.end();

    if (it_b + 100 == it_e) {
        std::cout << "== 100" << std::endl;
    }
    if (it_b + 10 == it_e) {
        std::cout << "== 10" << std::endl;
    }
    if (it_e - 100 == it_e) {
        std::cout << "== -100" << std::endl;
    }

    return 0;
}
