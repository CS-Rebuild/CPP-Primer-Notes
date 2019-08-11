#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[]) 
{
    Sales_data total; // variable to hold data for the next transaction
    ifstream in(argv[1]);
    if (!in) {
        cout << "Cannot open file: " << string(argv[1]) << endl;
        return -1;
    }

    // read the first transaction and ensure that there are data to process
    if (in >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (in >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            // if we're still processing the same book
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold; // update the running total
                total.revenue += trans.revenue;
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

