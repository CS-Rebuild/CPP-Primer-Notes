#include <regex>
#include <string>
#include <iostream>

using namespace std;

int main() {
    cout << "=====" << endl;
    try {
        regex r("[[:alnum:]+\\.(cpp|cxx|cc)$", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("[[:alnum:]]+\\.(cpp|cxx|cc)$", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("[[:alnum:]]+\\.cpp|cxx|cc)$", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("[[:alnum:]]+{+\\.(cpp|cxx|cc)$", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("[c-a]", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("*", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("?", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
    cout << "=====" << endl;
    try {
        regex r("", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }
}
