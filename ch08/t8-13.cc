#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    struct PersonInfo {
        string name;
        vector<string> phones;
    };

    ifstream in(argv[1]);
    if (!in) {
        cout << "Cannot open file: " << string(argv[1]) << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;

    istringstream record;
    while (getline(in, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto &p : people) {
        cout << p.name << " ";
        for (auto &phone : p.phones) {
            cout << phone << " ";
        }
        cout << endl;
    }
    return 0;
}
