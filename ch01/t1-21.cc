#include <iostream>
#include "Sales_item.h"

int main () {
  Sales_item trans1, trans2;
  std::cout << "Please input 2 items: " << std::endl;
  std::cin >> trans1 >> trans2;
  if (compareIsbn(trans1, trans2)) {
    std::cout << trans1 + trans2 << std::endl;
  } else {
    std::cout << "different ISBN" << std::endl;
  }
  return 0;
}