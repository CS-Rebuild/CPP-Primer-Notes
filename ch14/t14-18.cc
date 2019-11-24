#include "String.h"
#include <iostream>
using namespace std;

int main() {
    String s1("abc");
    String s2("efg");
    String s3("abc");
    String s4("abcd");
//    s1 == s2;
    cout << (s1 == s2) << endl;
    cout << (s1 == s3) << endl;
    cout << (s4 != s3) << endl;
    cout << (s1 > s4) << endl;
    cout << (s1 < s4) << endl;
    cout << (s1 >= s4) << endl;
    cout << (s1 <= s4) << endl;
}
