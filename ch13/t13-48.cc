#include "t13-44.h"
#include <vector>
#include <iostream>
using namespace std;

void foo(String x) {
    cout << x.c_str() << endl;
}

void bar(const String &x) {
    cout << x.c_str() << endl;
}

String baz() {
    cout << __PRETTY_FUNCTION__ << endl;
    String ret("world");
    return ret;
}

int main() {
    char txt[] = "main_text";

    String s0;
    String s1("hello");
    String s2(s0);
    String s3 = s1;
    String s4(txt);
    s2 = s1;

    foo(s1);
    bar(s1);
    foo("foo");
    bar("bar");
    String s5 = baz();
    
    vector<String> svec;
    svec.reserve(8);
    cout << "----" << endl;
    svec.push_back(s0);
    svec.push_back(s1);
    svec.push_back(s2);
    svec.push_back(s3);
    svec.push_back(s4);
    svec.push_back(s5);
    svec.push_back(baz());
    svec.push_back("good job");
    cout << "----" << endl;
    for (const auto &s : svec) {
        cout << s.c_str() << endl;
    }
}
