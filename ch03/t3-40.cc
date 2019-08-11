#include <cstring>
#include <iostream>

using namespace std;

int main() {
    static const char a[] = "abc";
    static const char b[] = "efg";
    constexpr size_t len = strlen(a) + strlen(b) + 1;
    char c[len];
    strcpy(c, a);
    strcat(c, b);
    cout << c << endl;
    return 0;
}
