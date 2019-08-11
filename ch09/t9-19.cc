#include <string>
#include <list>
#include <iostream>

using namespace std;

int main() {
    string word;
    list<string> sd;

    while (cin >> word)
        sd.push_back(word);

    for (const auto &s : sd) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
