#include <stdexcept>
#include <iostream>

using namespace std;

class exceptionType{};

typedef int EXCPTYPE;

int main() {
    try {
        throw new exceptionType();
    } catch (exceptionType *pet) {
        cout << "1" << endl;
    }

    try {
        throw "abc";
    } catch (...) {
        cout << "2" << endl;
    }

    try {
        throw 42;
    } catch (EXCPTYPE) {
        cout << "3" << endl;
    }

}
