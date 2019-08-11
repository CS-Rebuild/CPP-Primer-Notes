#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    list<int> il(8-3);
    copy(ivec.cbegin() + 3, ivec.cbegin() + 8, il.rbegin());
    for (auto &e : il)
        cout << e << " ";
    cout << endl;

    return 0;
}
