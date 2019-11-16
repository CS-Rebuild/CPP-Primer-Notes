#include <iostream>

namespace mathLib {
    namespace MatrixLib {
        class matrix {};
        matrix operator* (const matrix &, const matrix &);
    }
}

mathLib::MatrixLib::matrix mathLib::MatrixLib::operator* (const matrix &a, const matrix& b) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; 
    return a;
}

int main() {
    mathLib::MatrixLib::matrix a, b;
    a * b;
}
