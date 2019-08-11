#include <iostream>
#include <string>
#include "t7-6.h"

using namespace std;

int main() 
{
    Sales_data total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (read(std::cin, total)) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (read(std::cin, trans)) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {              
                // print results for the previous book 
                print(std::cout, total) << std::endl;  
                total = trans;  // total now refers to the next book
            }
        }
        print(std::cout, total) << std::endl;  
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }

    return 0;
}

