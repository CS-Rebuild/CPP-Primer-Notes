#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);

    if (!in) {
        cout << "Cannot open file: " << string(argv[1]) << endl;
        return -1;
    }

    vector <string> svec;
    string line;
    while (getline(in, line)) {
        svec.push_back(line);
    }

    for (auto s : svec) {
        istringstream record(s);
        string word;
        while (record >> word)
            cout << word << endl;
    }
    return 0;
}

