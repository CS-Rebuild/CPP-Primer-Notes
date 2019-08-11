#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream input(argv[1]);
    vector<string> svec;
    string line;

    if (!input) {
        cout << "open file error: " << string(argv[1]) <<  endl;
        return -1; 
    }
    while(input >> line) {
        svec.push_back(line);
    }
    int i = 0;
    for (auto &s : svec) {
        ++i;
        cout << i << ":\t" << s << endl;
    }

    input.close();
    return 0;
}
