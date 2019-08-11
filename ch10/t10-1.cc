#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9,2,3,4,5,2,2,3,3};
    auto cnt = count(ivec.cbegin(), ivec.cend(), 3);
    cout << cnt << endl;

    return 0;
}
