#include <iostream>
using std::cout;
using std::endl;

namespace Exercise {
    int ivar = 0;
    double dvar = 0;
    const int limit = 1000;
}

int ivar = 10;

using namespace Exercise;

int main() {
    double dvar = 3.1416;
    int iobj = limit + 1;
    //! ++ivar;
    ++Exercise::ivar;
    ++::ivar;
    cout << Exercise::ivar << endl;
    cout << ::ivar << endl;
    cout << Exercise::dvar << endl;
    cout << dvar << endl;
}
