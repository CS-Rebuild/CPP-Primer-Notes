#include <string>
#include <iostream>
using namespace std;
string &fun(string &name, const string &prefix, const string &suffix) {
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(suffix);
    return name;
}

int main() {
    string name{"peter"};
    cout << fun(name, "Mr.", "Jr.") << endl;
}
