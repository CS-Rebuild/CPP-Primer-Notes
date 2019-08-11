#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1("abc");
    string s2("abcd");

    if (s1 == s2) {
        cout << "string equal" << endl;
    } else {
        cout << "string unequal" << endl;
    }

    const char *c1 = "abcd";
    const char *c2 = "abcd";

    if (strcmp(c1, c2) == 0) {
        cout << "char array equal" << endl;
    } else {
        cout << "char array unequal" << endl;
    }
    return 0;
}
