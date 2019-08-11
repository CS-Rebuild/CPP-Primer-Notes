#include "t7-41.h"

int main () {
    std::cout << "d1" << std::endl;
    Sales_data d1("d1", 2, 30);
    print(std::cout, d1) << std::endl;

    std::cout << "d2" << std::endl;
    Sales_data d2;
    print(std::cout, d2) << std::endl;

    std::cout << "d3" << std::endl;
    Sales_data d3("d3");
    print(std::cout, d3) << std::endl;

    std::cout << "d4" << std::endl;
    Sales_data d4(std::cin);
    print(std::cout, d4) << std::endl;

}
