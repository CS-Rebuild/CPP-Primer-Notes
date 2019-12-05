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
    while(input.getline(sink, 50, '\n')) {
        cout << input.gcount() << ": " << sink << endl;
    }
}
