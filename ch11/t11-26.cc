#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> m;
    map<string, int>::key_type key = "abc";
    m[key] = 12;
    map<string, int>::mapped_type value = m[key];
    cout << value << endl;
    map<string, int>::iterator it = m.begin();
    cout << it->first << " " << it->second << endl;

    return 0;
}
