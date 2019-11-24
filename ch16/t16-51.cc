#include <iostream>
using namespace std;

template<typename T, typename ... Args> 
void foo(const T &t, const Args& ... rest) {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << sizeof...(rest) << endl;
    cout << sizeof...(Args) << endl;
    cout << "-----" << endl;
}

int main() {
    int i = 0; double d = 3.14; string s = "how now brown cow";
    foo(i, s, 42, d);
    foo(s, 42, "hi");
    foo(d, s);
    foo("hi");
}
