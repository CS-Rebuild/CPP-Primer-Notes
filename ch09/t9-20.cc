#include <iostream>
#include <string>
#include <list>
#include <deque>
using namespace std;

int main() {
    list<int> lst{1,2,3,4,5,6,6,7,8,8,9,10,11,12,13,14,99};
    deque<int> odd, even;
    cout << "list size " << lst.size() << endl;
    for (const auto &e : lst) {
        if (e & 1) {
            odd.push_back(e);
        } else {
            even.push_back(e);
        }
    }

    cout << "odd size " << odd.size() << ": ";
    for (const auto &e : odd)
        cout << e << " ";
    cout << endl;

    cout << "even size " << even.size() << ": ";
    for (const auto &e : even)
        cout << e << " ";
    cout << endl;

    return 0;
}
