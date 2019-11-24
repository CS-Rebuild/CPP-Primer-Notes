#include <vector>
#include <iostream>
using namespace std;

template <typename It>
auto fcn3(It beg, It end) -> decltype(*beg + 0) {
    return *beg;
}

int main() {
    vector<int> iv{1,2,3,4,5};
    cout << (fcn3(iv.begin(), iv.end()) = 3) << endl;
}
