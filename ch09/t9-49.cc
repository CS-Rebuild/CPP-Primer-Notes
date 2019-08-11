#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);

    string filter("bdfghijklpqty");
    string word;
    string::size_type max = 0;
    string max_string;
    while (in >> word) {
        //cout << word << endl;
        if (word.find_first_of(filter) == string::npos) {
            // test word: mmmmoooo
            cout << "tmp string: " << word << " max: " << word.size() << endl;
            max = word.size() > max ? (max_string = word, word.size()) : max; 
        } else {
            cout << "filter word: " << word << endl;
        }
    }
    cout << "max string: " << max_string << " max: " << max << endl;
    return 0;
}
