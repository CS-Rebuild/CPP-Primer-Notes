#include <iostream>
using namespace std;

int main() {
    string *buf = new string();
    new(buf) string("abc");
    cout << buf << ": " << *buf << endl;
    string *p = new(buf) string("hi");
    cout << buf << ": " << *buf << endl;
    cout << p << ": " << *p << endl;
    delete p;
    cout << buf << ": " << *buf << endl;
}
