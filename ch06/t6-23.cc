#include <iostream>
using namespace std;

void print(const int *ip) {
    cout << __PRETTY_FUNCTION__ << endl;
    if (ip)
        cout << *ip << endl;
}

void print(const int *beg, const int *end) {
    cout << __PRETTY_FUNCTION__ << endl;
    while (beg != end)
        cout << *beg++ << " ";
    cout << endl;
}

void print(const int ia[], size_t size) {
    cout << __PRETTY_FUNCTION__ << endl;
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;
}

void print(int (&arr)[2]) {
    cout << __PRETTY_FUNCTION__ << endl;
    for (auto e : arr)
        cout << e << " ";
    cout << endl;
}

int main() {
    int i = 1, j[2] = {2, 3};

    print(&i);
    print(j);

    print(&i, &i+1);
    print(begin(j), end(j));

    print(&i, 1);
    print(j, end(j) - begin(j));

    print(j);

    return 0;
}
