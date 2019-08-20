#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    vector<string> lv;
    map<string, pair<set<int>, int>> dict;

    string line;
    size_t lno = 0;
    while (getline(in, line)) {
        lv.push_back(line);
        istringstream record(line);
        string word;
        while (record >> word) {
            dict[word].first.insert(lno);
            dict[word].second++;
        }
        ++lno;
    }

    do {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        if (dict.find(s) != dict.cend()) {
            cout << s << " occurs " << dict[s].second << " times " << endl;
            for (const auto &e : dict[s].first)
                cout << "\t" << "(line " << e << ")\t" << lv[e] << endl;
        } else {
            cout << s << " occurs " << 0 << " times" << endl;
        }
    } while (true);

    return 0;
}
