#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int main() {
    string s;
    string sought = "quit";
    while (cin >> s && s != sought) {
        cout << s << endl;
    }
    assert(cin);

    return 0;
}
