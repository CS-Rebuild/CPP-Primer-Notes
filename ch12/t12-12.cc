#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) {
    cout << ptr.use_count() << " |1| " << *ptr << endl;
}

int main() {
    auto p = new int(4);
    auto sp = make_shared<int>(5);
    process(sp);
    cout << *sp << endl;
    //! process(new int());
    //! process(p);
    process(shared_ptr<int>(p));
    cout << *p << endl;
    return 0;
}
