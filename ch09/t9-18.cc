#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    string word;
    deque<string> sd;

    while (cin >> word)
        sd.push_back(word);

    for (const auto &s : sd) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
