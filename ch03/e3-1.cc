#include <iostream>
using namespace std;
int main() {
    int ia[3][4] = {1,2,3,4,11,12,13,14,21,22,23,24};

    for (auto &row : ia)
        for (auto col : row)
            std::cout << col << " ";
    std::cout << std::endl;

    typedef int(*prow_t)[4];
    std::cout << "ia: " << ia << std::endl;
    std::cout << "ia+3: " << ia + 3 << std::endl;

    for (prow_t row = ia; row != &ia[3]; ++row) {
        std::cout << "row: " << row << std::endl;
        for (int i = 0; i != 4; ++i)
            std::cout << "(*row)[i]: " << (*row)[i] << "; ";
        std::cout << std::endl;
    }
    typedef int (row_t)[4];
    row_t row = {1, 2, 3, 4}; // cannot use other array instantiate an array
    for (int i = 0; i != 4; ++i)
        std::cout << "(row)[i]: " << (row)[i] << "; ";
    std::cout << std::endl;

    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q)
            std::cout << *q << ' ';
        std::cout << std::endl;
    }


    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            std::cout << *q << ' ';
        std::cout << std::endl;
    }
    return 0;
}
