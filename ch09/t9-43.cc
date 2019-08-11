#include <string>
#include <iostream>

using namespace std;



string &replace(string &s, const string &oldVal, const string &newVal) {
    for (auto iter = s.begin(); iter <= s.end() - oldVal.size(); ) {
        if (oldVal == string{iter, iter + oldVal.size()}) {
            s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.cbegin(), newVal.cend());
            iter += newVal.size();
        } else {
            ++iter;
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
