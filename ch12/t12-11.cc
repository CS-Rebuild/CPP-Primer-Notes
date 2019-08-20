#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr) {
    cout << ptr.use_count() << " |1| " << *ptr << endl;
}

int main() {
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p.get()));
    cout << p.use_count() << " |2| " << *p << endl;

    return 0;
}
