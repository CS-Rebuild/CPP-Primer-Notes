#include <memory>
#include <iostream>
using namespace std;

int main() {
    auto sp = make_shared<int>(4);
    auto p = sp.get();
    cout << sp.use_count() << " | " << *sp << endl;
    delete p;
    cout << sp.use_count() << " | " << *sp << endl;
    return 0;
}
