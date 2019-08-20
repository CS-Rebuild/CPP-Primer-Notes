#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) {
    cout << ptr.use_count() << " |1| " << *ptr << endl;
}

int main() {
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p));
    cout << p.use_count() << " |2| " << *p << endl;
    *p = 32;
    shared_ptr<int> q(p);
    cout << p.use_count() << " |3| " << *p << endl;
    cout << q.use_count() << " |4| " << *q << endl;
    process(p);
    cout << p.use_count() << " |5| " << *p << endl;
    cout << q.use_count() << " |6| " << *q << endl;

    return 0;
}
