#include <vector>
#include <string>
#include <iostream>

using namespace std;

void print(const string &name, const vector<int> &ivec) {
    cout << name << ": ";
    for (auto v : ivec) {
        cout << v << " ";
    } 
    cout << endl;
}
int main() {
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v2;
    vector<int> v4{1,2,3,4,5,6};
    vector<int> v5 = {11,12,13,14,15,16};
    vector<int> v6(v5.begin(), v5.end());
    vector<int> v7(6);
    vector<int> v8(6, 2);
    
    print("v1", v1);
    print("v2", v2);
    print("v3", v3);
    print("v4", v4);
    print("v5", v5);
    print("v6", v6);
    print("v7", v7);
    print("v8", v8);
    return 0;
}
