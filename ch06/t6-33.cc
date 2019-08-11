#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &iv) {
    if (iv.empty()) {
        return;
    }
    cout << *begin(iv) << " ";
    print(vector<int>(begin(iv)+1, end(iv)));
}


int main() {
    print({1,2,3,4,5,6});
    cout << endl;
    print({1});
    cout << endl;
    print({});
    cout << endl;
    return 0;
}
