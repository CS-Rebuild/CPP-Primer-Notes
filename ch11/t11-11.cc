#include <iostream>
#include "Sales_data.h"
#include <set>

using namespace std;

int main() {
    //multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);    
    multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn);    

    return 0;
}
