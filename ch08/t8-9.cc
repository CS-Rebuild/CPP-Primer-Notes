#include <iostream>
#include <sstream>

using namespace std;

istream &fun(istream &is) {
    string input;
    while (is >> input) {
        cout << input << endl;
        if (is.eof()) {
            cout << "eof()" << endl;
            break;
        }
    }
    is.clear();
    return is;
}

int main() {
    string input = "abc efg hij kkk";
    istringstream record(input);
    istream &is = fun(record);
    cout << is.rdstate() << endl;
}


