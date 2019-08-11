#include <iostream>
#include "Sales_item.h"
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;
using namespace std::placeholders;

void compareIsbn1(vector<Sales_item> &books) {
    sort(books.begin(), books.end(), [](const Sales_item &s1, const Sales_item &s2) -> bool {return s1.isbn() < s2.isbn(); });
}

int main() {
    istream_iterator<Sales_item> in_iter(cin), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");
    
    vector<Sales_item> vec(in_iter, eof);
    compareIsbn1(vec);
    for (auto it = vec.cbegin(), wc = it; it != vec.cend(); it = wc) {
        /*inline bool compareIsbn(const Sales_item &lhs, const Sales_item &rhs) 
            { return lhs.isbn() != rhs.isbn(); }*/
        wc = find_if(it, vec.cend(), bind(compareIsbn, _1, cref(*it)));
        // wc = find_if(it, vec.cend(), [it](const Sales_item &item) {return it->isbn() != item.isbn(); });
        out_iter = accumulate(it, wc, Sales_item(it->isbn()));
    }

    return 0;
}

