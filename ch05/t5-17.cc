#include <iostream>
#include <vector>
using namespace std;

bool prefix(vector<int> &ivec1, vector<int> &ivec2) {
    int sz = ivec1.size() > ivec2.size() ? ivec2.size() : ivec1.size();
    for (decltype(ivec1.size()) i = 0; i != sz; ++i)
        if (ivec1[i] != ivec2[i]) {
            return false;
        }
    return true;
}

int main() {
    vector<int> ivec1{0,1,1,2};
    vector<int> ivec2{3,0,1,1,2,4,5,8};
    if (prefix(ivec1, ivec2))
        cout << "Y" << endl;
    else 
        cout << "N" << endl;
    return 0;
}
