#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "";
    string prev = "";
    bool rep = false;
    while (cin >> input) {
        if (input == prev) {
            rep = true;
            break;
        } 
        prev = input;
    }

    cout << (rep ? prev : "no repeat") << endl;

    return 0;
}
