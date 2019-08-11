#include <string>
#include <iostream>
using namespace std;
string &fun(string &name, const string &prefix, const string &suffix) {
    name.insert(0, prefix, 0, prefix.size());
    name.insert(name.size(), suffix, 0, suffix.size());
    return name;
}

int main() {
    string name{"peter"};
    cout << fun(name, "Mr.", "Jr.") << endl;
}
