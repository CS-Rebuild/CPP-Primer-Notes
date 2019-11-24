#include <iostream>
#include <cstdlib>
using namespace std;
void *operator new(size_t size) {
    cout << __PRETTY_FUNCTION__ << endl;
    if (void *mem = malloc(size)) {
        cout << "size: " << size << " mem: " << mem << endl;
        return mem;
    } else {
        throw bad_alloc();
    }
}

void operator delete(void *mem) noexcept {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "mem: " << mem << endl;
    free(mem);
}

int main() {
    int *p = new int;
    delete(p);
}
