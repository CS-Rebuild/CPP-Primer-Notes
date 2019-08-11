#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream is(argv[1]);    
    istream_iterator<string> in_iter(is), eof;
    vector<string> svec;

    while (in_iter != eof) {
        svec.push_back(*in_iter++);
    }

    ostream_iterator<string> out_iter(cout, " ");
    for (auto e : svec)
        *out_iter++ = e;
    cout << endl;

    return 0;
}
