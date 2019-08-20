#include <iostream>
#include <memory>
using namespace std;

class MyInt {
public:
    MyInt(int a) { _a = a; cout << __PRETTY_FUNCTION__ << endl; }
    ~MyInt() { cout << __PRETTY_FUNCTION__ << endl; }
private:
    int _a;
}

int main() {
    MyInt *q = new MyInt(42), *r = new MyInt(100);
    cout << *q << " " << *r << endl;
    cout << q << " " << r << endl;
    r = q;
    cout << *q << " " << *r << endl;
    cout << q << " " << r << endl;

    auto q2 = make_shared<MyInt>(42), r2 = make_shared<MyInt>(100);
    cout << *q2 << " " << *r2 << endl;
    cout << q2 << " " << r2 << endl;
    r2 = q2;
    cout << *q2 << " " << *r2 << endl;
    cout << q2 << " " << r2 << endl;

    return 0;
}
