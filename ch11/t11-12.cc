#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    vector<pair<string, int>> pv;
    string s;
    int i;
    while(cin >> s >> i) {
        pv.push_back(make_pair(s, i));
    }
    for (const auto &e : pv)
        cout << e.first << " " << e.second << endl;

    return 0;
}
