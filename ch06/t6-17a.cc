#include <iostream>
#include <string>
using namespace std;

bool my_isupper(const string &str) {
    for (auto c : str)
        if (isupper(c))
            return true;
    return false;
}

int main() {
    cout << my_isupper("ceafeAce") << endl;
    cout << my_isupper("ceafeace") << endl;

    return 0;
}
