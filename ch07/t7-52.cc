#include <string>
#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

int main() {
    Sales_data item = {"978-0590353403", 25, 15.99};
    std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    Sales_data item2;
    std::cout << item2.bookNo << " " << item2.units_sold << " " << item2.revenue << std::endl;
}

