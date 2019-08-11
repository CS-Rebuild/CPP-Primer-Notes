#include <list>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    list<const char *> lst{"111", "222", "333"};
    vector<string> svec;

    svec.assign(lst.cbegin(), lst.cend());
    for (const auto &s : svec) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
