#include <tuple>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>
#include <utility>
#include <numeric>

#include "Sales_data.h"

using namespace std;

typedef tuple<vector<Sales_data>::size_type,
              vector<Sales_data>::const_iterator,
              vector<Sales_data>::const_iterator> matches;

vector<matches> findBook(const vector<vector<Sales_data>> &files, const string &book) {
    vector<matches> ret;
    for (auto it = files.cbegin(); it != files.cend(); ++it) {
        auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
        if (found.first != found.second) {
            ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));
        }       
    }
    return ret;
}

void reportResults(istream &in, ostream &os, const vector<vector<Sales_data>> &files) {
    string s;
    while (in >> s) {
        auto trans = findBook(files, s);
        if (trans.empty()) {
            cout << s << " not found in any stores" << endl;
            continue;
        }
        for (const auto &store : trans) {
            os << "store " << get<0>(store) << " sales: "
               << accumulate(get<1>(store), get<2>(store), Sales_data(s))
               << endl;
        }
    }
}

bool lt(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

vector<Sales_data> build_store(const string &s) {
    Sales_data item;
    vector<Sales_data> ret;
    ifstream is(s);
    while (read(is, item))
        ret.push_back(item);
    sort(ret.begin(), ret.end(), lt);
    return ret;
}

int main(int argc, char **argv) {
    assert(argc > 1);
    vector<vector<Sales_data>> files;
    for (int cnt = 1; cnt != argc; ++cnt)
        files.push_back(build_store(argv[cnt]));
    ifstream in("./findbook.in");
    reportResults(in, cout, files);
} 





