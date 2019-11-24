#include <iostream>
using namespace std;

class SmallInt {
friend SmallInt operator+(const SmallInt &a, const SmallInt &b);
public:
    SmallInt(int v = 0):val(v) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    operator int() const {
        cout << __PRETTY_FUNCTION__ << endl;
        return val;
    }
private:
    std::size_t val;
};

SmallInt operator+(const SmallInt &a, const SmallInt &b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return a.val + b.val;
}

struct LongDouble {
    LongDouble(double e = 0.0):e(e) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    LongDouble operator+(const SmallInt & si) {
        cout << __PRETTY_FUNCTION__ << endl;
        return e + static_cast<int>(si);
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

void calc(int a) {
    cout << __PRETTY_FUNCTION__ << endl;
}

void calc(LongDouble a) {
    cout << __PRETTY_FUNCTION__ << endl;
}

int main() {
    LongDouble ldObj;
    //! int ex1 = ldObj;
    int ex1 = static_cast<double>(ldObj);
    float ex2 = ldObj;

    double dval;
    calc(dval);

    cout << "----" << endl;
    SmallInt si;
    LongDouble ld;
    cout << "----" << endl;
    //! ld = si + ld;
    ld = static_cast<int>(si) + static_cast<double>(ld);
    cout << "----" << endl;
    ld = ld + si;
    
    cout << "----" << endl;
    //! double d = si + 3.14;
    double d = si + SmallInt(3.14);
}
