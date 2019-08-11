#include <iostream>
#include "Sales_data.h"
#include <set>

using namespace std;

int main() {
    //multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);    
    multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn);    
    //auto it = bookstore.begin();
    multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)>::iterator it = bookstore.begin();

    return 0;
}
