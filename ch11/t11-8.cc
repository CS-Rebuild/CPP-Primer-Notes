#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> svec;
    string word;
    while (cin >> word) {
        auto rst = find(svec.cbegin(), svec.cend(), word);
        if (rst == svec.cend())
            svec.push_back(word);
    }
    for (const auto &w : svec)
        cout << w << " ";
    cout << endl;

    return 0;
}
