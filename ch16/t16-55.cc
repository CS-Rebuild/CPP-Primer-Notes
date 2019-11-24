#include <iostream>
#include <string>
using namespace std;


template <typename T, typename... Args>
ostream &print(ostream &os, const T &t, const Args&... rest) {
    cout << __PRETTY_FUNCTION__ << endl;
    os << t << ",";
    cout << "---" << endl;
    return print(os, rest...);
}

template <typename T> 
ostream &print(ostream &os, const T &t) {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "---" << endl;
    return os << t;
}

int main() {
    int i = 33; double d = 3.14; string s = "hello";
    print(cout, i, s, 42);
}
