#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v{1,2,3,4,2,5,6};
    for (auto &e : v)
        cout << e << " ";
    cout << endl;

    auto begin = v.begin();
    while (begin != v.end()) {
        cout << "while: " << *begin << endl;
        if (*begin == 2) {
            ++begin;
            begin = v.insert(begin, 42);
            //! v.insert(begin, 42);
            ++begin;
        }
        ++begin;
    }

    for (auto &e : v)
        cout << e << " ";
    cout << endl;
    return 0;
}
