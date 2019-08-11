#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> svec{"100", "200", "333", "150"};
    int sum = 0;
    for (const auto &e : svec) {
        sum += stoi(e);
    }
    cout << sum << endl;
    return 0;
}
