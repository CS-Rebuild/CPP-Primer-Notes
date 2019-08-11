#include <iostream>
#include "t7-11.h"
using namespace std;

int main() {
    Sales_data d1;
    Sales_data d2("0-201-78343-X");
    Sales_data d3("0-201-78344-X", 3, 20.00);
    Sales_data d4(std::cin);

    print(std::cout, d1) << std::endl;
    print(std::cout, d2) << std::endl;
    print(std::cout, d3) << std::endl;
    print(std::cout, d4) << std::endl;
    return 0;
}
