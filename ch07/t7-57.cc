#include "t7-57.h"
#include <iostream>

int main() {
    Account ac;
    ac.rate(6.5);
    std::cout << Account::rate() << std::endl;
    std::cout << ac.rate() << std::endl;
}
