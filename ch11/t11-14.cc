#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main() {
    map<string, vector<pair<string, string>>> family;
    string surname;
    cout << "Please input surname" << endl;
    while (cin >> surname) {
        string first_name;
        string birth_day;
        cout << "Please input a first name" << endl;
        cin >> first_name >> birth_day;
        family[surname].push_back({first_name, birth_day});
        
        cout << "Please input surname" << endl;
    }

    for (auto & f : family) {
        cout << "Surname: " << f.first << endl;
        for (auto & n : f.second)
            cout << "First name: " << n.first << " Birth day: " << n.second << endl;
    }

    return 0;
}
