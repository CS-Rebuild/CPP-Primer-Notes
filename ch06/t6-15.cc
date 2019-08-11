#include <iostream>
#include <string>
using namespace std;

string::size_type find_char(string &s, const char &c, const string::size_type &occurs) {
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}

int main() {

    string s;

    cin >> s;
    string::size_type ctr = 0;
    auto index = find_char(s, 'o', ctr);
    cout << s << " " << index << " "  << ctr << endl;

    return 0;
}
