#include <forward_list>
#include <string>
#include <iostream>
using namespace std;

forward_list<string> &insert(forward_list<string> &flst, const string &key, const string &val) {
    forward_list<string>::iterator prev = flst.before_begin();
    forward_list<string>::iterator curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr == key) {
            flst.insert_after(curr, val);
            return flst;
        } else {
            prev = curr;
            ++curr;
        }
    }
    flst.insert_after(prev, val);
    return flst;
}

int main() {
    forward_list<string> flst = {"aaa", "bbb", "ccc", "ddd"};
    insert(flst, "aaa", "xxx");
    for (auto &e : flst) {
        cout << e << " ";
    }
    cout << endl;

    flst = {"aaa", "bbb", "ccc", "ddd"};
    insert(flst, "eee", "xxx");
    for (auto &e : flst) {
        cout << e << " ";
    }
    cout << endl;

    flst = {};
    insert(flst, "eee", "xxx");
    for (auto &e : flst) {
        cout << e << " ";
    }
    cout << endl;
}
