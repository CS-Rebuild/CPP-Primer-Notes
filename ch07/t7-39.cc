#include "t7-38.h"

Sales_data first_item(std::cin);
int main() {
    Sales_data next;
    Sales_data last("9-999-99999-9");

    print(std::cout, first_item) << std::endl;
    print(std::cout, next) << std::endl;
    print(std::cout, last) << std::endl;
}
