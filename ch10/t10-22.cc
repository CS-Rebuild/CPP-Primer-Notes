#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isLonger6(const string &s, vector<string>::size_type sz) {
    return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) -> bool {return s1.size() < s2.size(); });

    auto wc = count_if(words.begin(), words.end(), bind(isLonger6, _1, sz));

    cout << wc << endl;
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

    biggies(words, 6);

    return 0;
}
