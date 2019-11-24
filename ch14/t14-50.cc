#include <iostream>
using namespace std;

struct LongDouble {
    LongDouble(double e = 0.0):e(e) {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    operator double() {
        cout << __PRETTY_FUNCTION__ << endl;
        return e; 
    }

    operator float() {
        cout << __PRETTY_FUNCTION__ << endl;
        return e; 
    }

    long double e;
};

int main() {
    LongDouble ldObj;
    //! int ex1 = ldObj;
    int ex1 = static_cast<double>(ldObj);
    float ex2 = ldObj;
}
