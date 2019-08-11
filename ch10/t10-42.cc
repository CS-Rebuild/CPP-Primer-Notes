#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    string word;
    list<string> words;
    while (cin >> word) {
        words.push_back(word);
    }

    for (auto e : words) {
        cout << e << " ";
    }
    cout << endl;

    elimDups(words);
    
    for (auto e : words) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
