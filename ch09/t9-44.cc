#include <string>
#include <iostream>

using namespace std;

string &replace(string &s, const string &oldVal, const string &newVal) {
    for (string::size_type ix = 0; ix <= s.size() - oldVal.size(); ) {
        if (oldVal == string{s, ix, oldVal.size()}) {
            s.replace(ix, oldVal.size(), newVal);
            ix += newVal.size();
        } else {
            ++ix;
        }
    }

    return s;
}


int main() {
    string s{"tho:abc:tho:efh"};
    cout << s << endl;
    replace(s, "tho", "though");
    cout << s << endl;
}
