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
        
        for (sregex_iterator it(test_str.begin(), test_str.end(), r), end_it;
            it != end_it; ++it)
            if (it->str() != "albeit" && it->str() != "neighbor")
                cout << "illegal: " << it->str() << endl;
    }
    return 0;
}
