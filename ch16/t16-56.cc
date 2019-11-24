#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template <typename T> string debug_rep(const T &t) {
    cout << __PRETTY_FUNCTION__ << endl;
    ostringstream ret;
    ret << t;
    return ret.str();
}

template <typename T> string debug_rep(T *p) {
    cout << __PRETTY_FUNCTION__ << endl;
    ostringstream ret;
    ret << "Pointer: " << p;
    if (p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";
    return ret.str();
}

string debug_rep(const string &s) {
    cout << __PRETTY_FUNCTION__ << endl;
    return '"' + s + '"';
}

string debug_rep(char *p) {
    cout << __PRETTY_FUNCTION__ << endl;
    return debug_rep(string(p));
}

string debug_rep(const char *p) {
    cout << __PRETTY_FUNCTION__ << endl;
    return debug_rep(string(p));
}

template <typename T>
ostream &print(ostream &os, const T &t) {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "---" << endl;
    return os << t;
}

template <typename T, typename... Args>
ostream &print(ostream &os, const T &t, const Args&... rest) {
    cout << __PRETTY_FUNCTION__ << endl;
    os << t << ",";
    cout << "---" << endl;
    return print(os, rest...);
}

template <typename... Args>
ostream &errorMsg(ostream &os, const Args&... rest) {
    return print(os, debug_rep(rest)...);
}

int main() {
    string s = "hi";
    double d = 3.14;
    int i = 99;
    errorMsg(cout, s, d, i);
    return 0;
}
