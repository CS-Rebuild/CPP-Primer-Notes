#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    multimap<string, string> authors;
    authors.insert({"abc", "1 book"});
    authors.insert({"efg", "2 book"});
    authors.insert({"efg", "1 book"});
    authors.insert({"abc", "2 book"});
    authors.insert({"abc", "3 book"});
    authors.insert({"hij", "1 book"});

    for (auto &e : authors)
        cout << e.first << ": " << e.second << endl;

    map<string, set<string>> dict_authors;
    for (auto &e : authors) {
        dict_authors[e.first].insert(e.second);
    }

    for (auto &e : dict_authors) {
        cout << e.first << ": ";
        for (auto &s : e.second)
            cout << s << ", ";
        cout << endl;
    }

    return 0;
}
