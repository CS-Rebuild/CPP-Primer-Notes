#include "Sales_data.h"
#include <iostream>
using namespace std;
int main() {
    using Avg = double (Sales_data::*)() const;
    Avg pFun = &Sales_data::avg_price;
    Sales_data sd;
    double price = 0;
    cin >> sd.bookNo >> sd.units_sold >> price;
    sd.revenue = sd.units_sold * price;
    cout << (sd.*pFun)() << endl;
}
