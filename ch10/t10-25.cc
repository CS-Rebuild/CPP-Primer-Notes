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

bool check_size(const string &s, vector<string>::size_type sz) {
    return s.size() < sz;
}

string make_plural(int count, const string &s1, const string &s2) {
    return count > 1 ? s1 + s2 : s1;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) -> bool {return s1.size() < s2.size(); });

    auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length" << sz << " or longer" << endl;
    
    for_each(wc, words.end(), [](const string &s) -> void { cout << s << " ";});
    cout << endl;
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

    biggies(words, 5);

    return 0;
}
