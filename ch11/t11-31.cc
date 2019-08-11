#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    multimap<string, string> authors;
    authors.insert({"abc", "1 book"});
    authors.insert({"abc", "2 book"});
    authors.insert({"abc", "3 book"});
    authors.insert({"efg", "1 book"});
    authors.insert({"efg", "2 book"});
    authors.insert({"hij", "1 book"});

    string key(argv[1]);
    multimap<string, string>::iterator it = authors.find(key);
    auto entries = authors.count(key);

    while (entries) {
        it = authors.erase(it);
        --entries;
    }

    for (auto &e : authors)
        cout << e.first << " " << e.second << endl;

    return 0;
}
