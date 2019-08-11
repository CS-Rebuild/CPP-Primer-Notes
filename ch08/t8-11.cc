#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    struct PersonInfo {
        string name;
        vector<string> phones;
    };

    string line, word;
    vector<PersonInfo> people;

    istringstream record;
    while (getline(cin, line)) {
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
