#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>::const_iterator first, vector<int>::const_iterator last) {
    if (first != last) {
        cout << *first << " ";
        print(++first, last);
    }
}


int main() {
    vector<int> iv{1,2,3,4,5,6};
    print(iv.cbegin(), iv.cend());
    cout << endl;
    return 0;
}
