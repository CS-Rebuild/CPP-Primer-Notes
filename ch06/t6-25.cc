#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "usage: ./a.out str1 str2" << endl;
        return -1;
    }

    cout << string(argv[1]) + (argv[2]) << endl;

    return 0;
}
