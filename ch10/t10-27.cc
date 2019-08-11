#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,2,4,1,5};
    list<int> il;
    
    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), inserter(il, il.begin()));

    for (auto &e : il)
        cout << e << " ";
    cout << endl;

    return 0;
}
