#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> svec{"100.1", "200.2", "333.3", "150.3"};
    double sum = 0;
    for (const auto &e : svec) {
        sum += stod(e);
    }
    cout << sum << endl;
    return 0;
}
