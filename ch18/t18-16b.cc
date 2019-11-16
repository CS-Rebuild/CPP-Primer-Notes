#include <iostream>
using std::cout;
using std::endl;

namespace Exercise {
    int ivar = 0;
    double dvar = 0;
    const int limit = 1000;
}

int ivar = 10;


int main() {
    using Exercise::ivar;
    //! using Exercise::dvar;
    using Exercise::limit;
    double dvar = 3.1416;
    int iobj = limit + 1;
    ++ivar;
    ++::ivar;
    cout << ivar << endl;
    cout << ::ivar <<endl;
}
