#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &ivec, int key) {
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        if (*it == key)
            return true;
    }
}

int main() {
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    int key = 17;
    cout << search(ivec, key) << endl; 
}
