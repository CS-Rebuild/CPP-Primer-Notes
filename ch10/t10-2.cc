#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    string word;
    list<string> sl;
    while (cin >> word) {
        sl.push_back(word);
    }

    auto cnt = count(sl.cbegin(), sl.cend(), "aa");
    cout << cnt << endl;

    return 0;
}
