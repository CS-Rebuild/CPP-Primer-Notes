#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    multiset<string> c{"ms1", "ms2"};
    vector<string> v{"v1", "v2"};

    copy(v.begin(), v.end(), inserter(c, c.end()));
    //copy(v.begin(), v.end(), back_inserter(c));
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));

    return 0;
}
