#include <tuple>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {
    tuple<string, vector<string>, pair<string, int>> val {"abc", {"001", "002", "003"}, {"abc", 42}};
    cout << get<0>(val) << endl;
    for (auto it = get<1>(val).begin(); it != get<1>(val).end(); ++it)
        cout << *it << endl;
    cout << get<2>(val).first << endl;
    cout << get<2>(val).second << endl;
}
