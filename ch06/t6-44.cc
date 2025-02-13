#include <iostream>
#include <string>
using namespace std;

inline bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    cout << isShorter("abc", "efgh") << endl;
    cout << isShorter("abcd", "efg") << endl;

    return 0;
}
