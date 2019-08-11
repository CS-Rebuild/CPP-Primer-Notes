#include <iostream>
#include "Sales_item.h"

int main () {
  Sales_item book;
  std::cout << "Please input book: " << std::endl;

  while (std::cin >> book) {
    std::cout << "ISBN, Num, revenue: "<< book << std::endl;
  }
  return 0;
}