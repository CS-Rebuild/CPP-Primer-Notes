#include "Sales_data.h"
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

bool above(Sales_data &sd, double d) {
    return sd.avg_price() > d;
}

using namespace std;
int main() {
    vector<Sales_data> sdvec;
    sdvec.push_back(Sales_data("001", 10, 20));
    sdvec.push_back(Sales_data("002", 20, 10));
    sdvec.push_back(Sales_data("003", 30, 25));
    double price = 23;
    auto fun = bind(above, std::placeholders::_1, price);
    auto it = find_if(sdvec.begin(), sdvec.end(), fun);
    if (it != sdvec.end())
        cout << it->bookNo << endl;
    else 
        cout << "none" << endl;
}
