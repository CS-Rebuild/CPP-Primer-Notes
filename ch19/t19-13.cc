#include "Sales_data.h"
#include <iostream>
using namespace std;

int main() {
    Sales_data data1;
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::string Sales_data::*pBookNo = &Sales_data::bookNo;
    cout << data1.bookNo << endl;
    cout << data1.*pBookNo << endl;
}
