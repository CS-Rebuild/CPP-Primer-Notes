#include "t7-49.h"

int main() {
    std::string s("9-999-99999-9");
    std::cout << "1" << std::endl;
    Sales_data i;
    std::cout << "2" << std::endl;
    i.combine(s);
    std::cout << "3" << std::endl;
    i.combine(std::cin);
}
