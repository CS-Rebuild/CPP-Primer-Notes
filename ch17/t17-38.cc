#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream input(argv[1]);
    if (!input) {
        cout << "Open file error: " << string(argv[1]) << endl;
        return -1;
    }
    char sink[80];
    while(!input.eof()) {
        input.getline(sink, 50, '\n');
        cout << "> R <" << input.gcount() << ":" << sink;
        if (!input.good()) {
            if (input.gcount() > 0)
                input.clear();
        } else {
            cout << endl;
        }
    }
}
