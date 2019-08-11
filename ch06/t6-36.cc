#include <iostream>
#include <string>
using namespace std;

string (&fun1())[10] {
    static string str[10]{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    return str;
}

using strT = string[10];
strT &fun2() {
    static string str[10]{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    return str;
}

auto fun3() -> string(&)[10] {
    static string str[10]{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    return str;
}

static string str[10]{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
decltype(str) &fun4() {
    return str;
}

int main() {
    for (auto &s : fun1()) {
        cout << s << " ";
        s += "1";
    }
    cout << endl;
    for (auto &s : fun1())
        cout << s << " ";
    cout << endl;

    for (auto &s : fun2()) {
        cout << s << " ";
        s += "2";
    }
    cout << endl;
    for (auto &s : fun2())
        cout << s << " ";
    cout << endl;


    for (auto &s : fun3()) {
        cout << s << " ";
        s += "3";
    }
    cout << endl;
    for (auto &s : fun3())
        cout << s << " ";
    cout << endl;


    for (auto &s : fun4()) {
        cout << s << " ";
        s += "4";
    }
    cout << endl;
    for (auto &s : fun4())
        cout << s << " ";
    cout << endl;
    return 0;
}
