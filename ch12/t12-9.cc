#include <iostream>
#include <memory>
using namespace std;

int main() {
    int *q = new int(42), *r = new int(100);
    cout << *q << " " << *r << endl;
    cout << q << " " << r << endl;
    r = q;
    cout << *q << " " << *r << endl;
    cout << q << " " << r << endl;

    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    cout << *q2 << " " << *r2 << endl;
    cout << q2 << " " << r2 << endl;
    r2 = q2;
    cout << *q2 << " " << *r2 << endl;
    cout << q2 << " " << r2 << endl;

    return 0;
}
