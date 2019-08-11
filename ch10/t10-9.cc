#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main() {
    string word;
    vector<string> words;
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
