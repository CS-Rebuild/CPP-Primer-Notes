#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,4,5,6};
    for (auto e : ivec) 
        cout << e << " ";
    cout << endl;

    fill_n(ivec.begin(), ivec.size(), 0);

    for (auto e : ivec) 
        cout << e << " ";
    cout << endl;

    fill_n(back_inserter(ivec), 5, 3);

    for (auto e : ivec) 
        cout << e << " ";
    cout << endl;

    return 0;
}
