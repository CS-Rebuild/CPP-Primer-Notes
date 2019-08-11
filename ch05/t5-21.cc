#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "";
    string prev = "";
    bool rep = false;
    while (cin >> input) {
        if (input == prev) {
            if (isupper(input[0])) {
                rep = true;
                break;  
            } else 
                continue;
        } 
        prev = input;
    }

    cout << (rep ? prev : "no repeat") << endl;

    return 0;
}
