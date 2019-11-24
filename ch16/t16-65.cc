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

template <> 
string debug_rep(char *p) {
    cout << __PRETTY_FUNCTION__ << endl;
    return debug_rep(string(p));
}

template <>
string debug_rep(const char *p) {
    cout << __PRETTY_FUNCTION__ << endl;
    return debug_rep(string(p));
}

int main() {
    string s("hi");
    cout << "------" << endl;
    cout << debug_rep(s) << endl;
    cout << "------" << endl;
    cout << debug_rep(&s) << endl;
    cout << "------" << endl;
    const string *sp = &s;
    cout << debug_rep(sp) << endl;
    cout << "------" << endl;
    cout << debug_rep("hi world") << endl;
    cout << "------" << endl;
    return 0;
}
