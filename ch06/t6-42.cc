#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t, const string &, const string & = "s");

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    cout << make_plural(2, "word", "es") << endl;
    cout << make_plural(2, "word") << endl;

    return 0;
}
