#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    //map<string, vector<string>> family;
    multimap<string, string> family;
    string surname;
    string first_name;
    cout << "Please input surname" << endl;
    while (cin >> surname) {
        cout << "Please input a first name" << endl;
        cin >> first_name;
        //family[surname].push_back(first_name);
        family.insert({surname, first_name});
        cout << "Please input surname" << endl;
    }

    for (auto & f : family) {
        cout << "Surname: " << f.first << endl;
        cout << "First name: " << f.second << endl;
    }

    return 0;
}
