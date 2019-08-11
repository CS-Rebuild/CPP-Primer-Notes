#include "t10-12.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isSmall(const Sales_data &s1, const Sales_data &s2) {
    return s1.isbn() < s2.isbn();
}

void compareIsbn(vector<Sales_data> &books) {
    sort(books.begin(), books.end(), [](const Sales_data &s1, const Sales_data &s2) -> bool {return s1.isbn() < s2.isbn(); });
}

int main() {
    vector<Sales_data> books = {{"0-201-78345-1", 3, 20.00}, {"0-201-78345-9", 3, 20.00}, {"0-201-78345-2", 3, 20.00}, {"0-201-78345-0", 3, 20.00}};
    for (auto &item : books)
        print(cout, item) << " ";
    cout << endl;

    compareIsbn(books);
    for (auto &item : books)
        print(cout, item) << " ";
    cout << endl;
}
