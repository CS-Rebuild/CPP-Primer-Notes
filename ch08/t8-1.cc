#include <iostream>

using namespace std;

istream &fun(istream &is) {
    string input;
    while (is >> input) {
        if (is.eof()) {
            cout << "eof()" << endl;
            break;
        }
        cout << input << endl;
    }
    is.clear();
    return is;
}

int main() {
    istream &is = fun(cin);
    cout << is.rdstate() << endl;
}


