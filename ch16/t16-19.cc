#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T> void myprint(const T &c) {
    for (typename T::size_type i = 0; i != c.size(); ++i) {
        cout << c.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> iv{1,2,3,4,5,6};
    string s = "abcdefgh";
    myprint(iv);
    myprint(s);
}
