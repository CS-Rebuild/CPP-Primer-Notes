#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    list<int> il1, il2, il3;
    
    copy(ivec.cbegin(), ivec.cend(), inserter(il1, il1.begin()));
    copy(ivec.cbegin(), ivec.cend(), back_inserter(il2));
    copy(ivec.cbegin(), ivec.cend(), front_inserter(il3));
    for (auto &e : il1)
        cout << e << " ";
    cout << endl;

    for (auto &e : il2)
        cout << e << " ";
    cout << endl;

    for (auto &e : il3)
        cout << e << " ";
    cout << endl;

    return 0;
}
