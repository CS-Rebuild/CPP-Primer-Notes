#include <iostream>
#include <string>
#include "t7-2.h"

using namespace std;

int main() 
{
    Sales_data total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {              
                // print results for the previous book 
                std::cout << total.bookNo << " " << total.units_sold << " "
                          << total.revenue << " " << std::endl;  
                total = trans;  // total now refers to the next book
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " "
                  << total.revenue << " " << std::endl;  
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }

    return 0;
}

