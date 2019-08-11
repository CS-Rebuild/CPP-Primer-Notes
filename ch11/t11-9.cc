#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    map<string, list<int>> wmap;
    string line; 
    int line_idx = 0;
    while (getline(in, line)) {
        istringstream record(line);
        string key;
        while (record >> key)
            wmap[key].push_back(line_idx);
        ++line_idx;
    }

    for (const auto & w : wmap) {
        cout << "key: " << w.first << endl;
        for (const auto & ln : w.second)
            cout << ln << " ";
        cout << endl; 
    }

    return 0;
}
