#include <vector>
#include <algorithm>
#include "t13-31.h"

using namespace std;

int main() {
    vector<HasPtr> v;
    v.push_back(HasPtr("1test"));
    v.push_back(HasPtr("3test"));
    v.push_back(HasPtr("4test"));
    v.push_back(HasPtr("2test"));
    sort(v.begin(), v.end());

    for (auto &e : v) {
        e.print();
    }
}
