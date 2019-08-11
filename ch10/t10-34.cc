#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> ivec{0,1,2,3,4,5};
    for (auto it = ivec.crbegin(); it != ivec.crend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
