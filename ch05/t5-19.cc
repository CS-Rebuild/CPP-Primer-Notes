#include <iostream>
#include <string>
using namespace std;

int main() {
    do {
        string s1, s2;
        cout << "Please enter two string: ";
        if (cin >> s1 >> s2) {
            cout << s1.size() << " " << s2.size() << endl;
            cout << (s1.size() >= s2.size() ? s2 : s1) << endl;
        }
    } while (cin);

    return 0;
}
