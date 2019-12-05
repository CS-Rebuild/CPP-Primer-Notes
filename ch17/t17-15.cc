#include <regex>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern);
    smatch results;
    string test_str; 
    while (cin >> test_str) {
        if (test_str == "q")
            break;
        if (regex_search(test_str, results, r))
            cout << "illegal: " << results.str() << endl;
        else
            cout << "legal" << endl;
    }
    return 0;
}
