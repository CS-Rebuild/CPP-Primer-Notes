#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    vector<int> ivec1{1,2,3,4,5,6,7,8,9,10};
    vector<int>::size_type cnt1 = ivec1.size();
    for (vector<int>::size_type ix1 = 0; ix1 != ivec1.size(); ix1++, cnt1--)
        ivec1[ix1] = cnt1;
    for (auto i : ivec1)
        cout << i << " ";
    cout << endl;

    return 0;
}
