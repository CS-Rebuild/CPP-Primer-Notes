#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main() {
    size_t n = 10;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    auto q = p;
    string s;
    while (cin >> s && q != p + n)
        alloc.construct(q++, s);
    size_t size = q - p;
    cout << size << endl;
    while (size--)
        cout << *(q - size - 1) << " ";
    cout << endl;

    while (q != p)
        alloc.destroy(--q);

    alloc.deallocate(p, n);
    return 0;
}
