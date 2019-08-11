#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    list<int> il;
    for (auto it = &ivec[7]; it != &ivec[2]; --it)
        il.push_back(*it);

    for (auto &e : il)
        cout << e << " ";
    cout << endl;

    return 0;
}
