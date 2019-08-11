#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(int count, const string &s1, const string &s2) {
    return count > 1 ? s1 + s2 : s1;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) -> bool {return s1.size() < s2.size(); });

    auto wc = count_if(words.begin(), words.end(), [sz](const string &s) -> bool {return s.size() >= sz; });

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
