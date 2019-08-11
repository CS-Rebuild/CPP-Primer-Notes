#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, int i) {
    return i > s.size();
}

int main() {
    vector<int> ivec{1,2,6,3,4,5,6,7};
    string s{"abcd"};
    auto wc = find_if(ivec.cbegin(), ivec.cend(), bind(check_size, cref(s), _1));
    cout << *wc << endl;

    return 0;
}
