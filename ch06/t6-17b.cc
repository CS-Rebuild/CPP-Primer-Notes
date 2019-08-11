#include <iostream>
#include <string>
using namespace std;

void conv2lower(string &str) {
    for (auto &c : str) {
        if (isupper(c)) {
            cout << c << endl;
            c = tolower(c);
            cout << c << endl;
        }
    }
}

int main() {
    string str;
    cin >> str;
    conv2lower(str);
    cout << str << endl;

    return 0;
}
